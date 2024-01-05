#include <iostream> // iostream이라는 헤더를 포함(include)

using namespace std; // 네임스페이스 설명 std::cout

int main() // entry point
{
    // 주석(comment) 다는 방법

    cout << "Hello, World!" << endl; // 자료형에 자유로운 구조 << 는 cout으로 흘려보낸다
    // printf("Hello World!!! by printf"); -> 설정해줘야 하는 값이 있음

    // 입출력에 대해서는 뒤에 다시 나와요.
    char user_input[100];
    cin >> user_input;
    cout << user_input;

    return 0;
}