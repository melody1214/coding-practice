#include <iostream>

using namespace std;

int main()
{
    string first_str = "first";
    string second_str = "second";

    /*
    문자열 비교: str1.compare(str2)
    두 문자열이 같으면 0, 다르면 -1 리턴
    */
    cout << first_str << ".compare(" << second_str << "\")" << endl;    
    if (first_str.compare(second_str) == 0)
        cout << "not equal" << endl;
    else
        cout << "equal" << endl;

    /* 
    문자열 검색: str1.find(str2)
    str1에서 str2와 일치하는 문자열이 있으면 시작 인덱스 리턴, 없으면 -1 리턴
    */
    int index = first_str.find(second_str);
    cout << first_str << ".find(" << second_str << "\")" << endl; 
    if (index > 0)
        cout << "success! starting index: " << index << endl;
    else
        cout << "fail!" << endl;

    /*
    문자열 길이: string.length()
    string의 길이 리턴. 한글의 경우 한 글자가 2바이트
    */
    int first_length = first_str.length();
    int second_length = second_str.length();
    cout << first_str << ".length()" << endl;
    cout << first_length << endl;
    cout << second_str << ".length()" << endl;
    cout << second_length << endl;

    /*
    문자열 맨 끝에 붙이기: str1 += str2 또는 str1.append(str2)
    */
    cout << first_str << " += " << second_str << endl;
    first_str += second_str;
    cout << first_str << endl;

    first_str = "first";
    
    cout << first_str << ".append(" << second_str << "\")" << endl;
    first_str.append(second_str);
    cout << first_str << endl;

    first_str = "first";

    cout << first_str << ".append(" << second_str << "\", 3)" << endl;
    first_str.append(second_str, 3);
    cout << first_str << endl;

    first_str = "first";

    cout << first_str << ".append(" << second_str << "\", 2, 4)" << endl;
    first_str.append(second_str, 2, 4);
    cout << first_str << endl;

    first_str = "first";

    /*
    문자열 삽입: str1.insert(target index, str2)
    */
    cout << first_str << ".insert(3, " << second_str << "\")" << endl;
    first_str.insert(3, second_str);
    cout << first_str << endl;

    first_str = "first";

    /*
    문자열 교체: str1.replace(target index, length, str2)
    */
    cout << first_str << ".replace(" << first_str << ".find(\"fir\"), 3, \"1\")" << endl;
    first_str.replace(first_str.find("fir"), 3, "1");
    cout << first_str << endl;

    return 0;
}