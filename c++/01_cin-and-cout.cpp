#include <iostream>

/*
iostream 헤더에 선언되어있는 표준 입출력을 위한 변수나 함수들이 정의되어있는 std namespace 사용을 선언
사용법은 본래 std::변수, std::함수 형태이나 std의 경우 생략 가능
std namespace를 사용하지 않을 경우 아래 cin, cout은 원래 std::cin, std::cout 형태로 사용해야함
*/
using namespace std;

int main()
{
    int number = 0;

    /*
    C++에서 콘솔창에 입력은 cin, 출력은 cout을 이용한다.
    cin은 사용자 입력을 기다리고, 입력이 완료되면 '>>'을 이용하여 입력된 값을 변수에 저장한다.
    */
    cin >> number;

    /* 
    cout은 '<<'을 이용하여 출력될 값들을 표준 출력에 보내 화면에 출력되도록 한다.
    'endl'은 endline을 의미하며 개행 문자가 들어간다. "\n"으로 대체해도 된다.
    */
    cout << "입력한 숫자는 " << number << "입니다." << endl;

    return 0;
}