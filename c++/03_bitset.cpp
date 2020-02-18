#include <iostream>
#include <bitset> // bitset을 사용하기 위해 헤더 포함

using namespace std;

int main()
{
    bitset<8> bit1, bit2;

    bit1.reset();   // 0000 0000
    bit2.reset();   // 0000 0000

    bit1 = 79;      // 0100 1111
    bit2 = 0x7c;    // 0111 1100  
    
    cout << "bit1: " << bit1 << endl;
    cout << "bit2: " << bit2 << endl;

    /*
    C++에서는 std 클래스에 입출력을 위한 shift 연산자가 정의되어 있다.
    따라서 cout을 이용하여 bit 연산 결과를 출력하고 싶다면 bit 연산은 bitset 끼리 묶어주어야한다.
    bitset 끼리 괄호로 묶어주면 그 안에서는 bit 연산을 수행하지만 밖에서는 출력을 위한 연산자로 인식한다.
    가독성을 높이려면 bit 연산은 따로 수행하고 결과를 cout에 포함해주면 좋을듯 하다.
    */
    cout << "bit1 & bit2: " << (bit1 & bit2) << endl;   // 01001100
    cout << "bit1 | bit2: " << (bit1 | bit2) << endl;   // 01111111
    cout << "bit1 ^ bit2: " << (bit1 ^ bit2) << endl;   // 00110011
    cout << "~bit1: " << ~bit1 << endl; // 10110000
    cout << "bit2 << 2: " << (bit2 << 2) << endl;   // 11110000
    cout << "bit1 >> 4: " << (bit1 >> 4) << endl;   // 00000100
    
    return 0; 
}