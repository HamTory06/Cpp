#include <iostream> //전처리 지시자
#include <climits>

using namespace std;

int main(){
    //변수 선언 과정
    int val = 3;
    cout << &val << endl;
    //C++: 객체지향 프로그래밍
    /*
     * 컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다.
     * - 배열 생성
     * 재래적 절차적 프로그래밍: 배열의 크기가 미리 결정
     * 객체지향 프로그래밍: 배열의 크기를 실행 시간 결정
     *
     * 포인터: 사용할 주소에 이름을 붙인다.
     * 포인터는 포인터의 이름이 주소를 나타낸다.
     * 간접값 연산자, 간접 참조 연산자 *
     */
    int *point1; //c style
    int* point2; //c++ style
    int* point3, d;//point3는 포인터 변수, d는 int형 변수

    int a = 6; //수
    int* b; //위치

    b = &a;

    cout << "a의 값 " << a << endl;
    cout << "*b의 값 " << *b << endl;

    //a의 주소와 *b의 주소와 같다
    cout << "a의 주소 " << &a << endl;
    cout << "*b의 주소 " << b << endl;

    *b = *b + 1;

    cout << "이제 a의 값은 " << a << endl;


    return 0;
}