#include <stdio.h>

/* 
Basic daemon structure
====================================================
- Fork off the parent process
- Change file mode mask (umask)
- Open any logs for writing
- Create a unique session ID (SID)
- Change the current working directory to a safe place
- Close standard file descriptors
- Enter actual daemon code
====================================================
*/

int main(int argc, char *argv[]) {
    pid_t pid;
    pid_t sid;
    FILE *log;

    pid = fork();

    if (pid < 0) {
        // fork() failed.
        exit(EXIT_FAILURE);
    }

    // child process
    if (pid == 0) {
        exit(EXIT_SUCCESS);
    }

    // Open a log file
    
    // Create a new SID for the child process.
    sid = setsid();
    if (sid < 0) {
        exit(EXIT_FAILURE);
    }
}