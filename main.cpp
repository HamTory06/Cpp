#include <iostream> //전처리 지시자
#include <climits>
//#define PIE 3.1415926535 c언어에서 사용하는 방법

//std::cout, std::endl std를 생략하는것
using namespace std;

int main() {

    const float PIE = 3.1415926535;
//    PIE = 10; error 한번 지정하면 변경할수 없음

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int " << sizeof n_int << "bit" << endl;
    cout << "short " << sizeof n_short << "bit" << endl;
    cout << "long " << sizeof n_long << "bit" << endl;
    cout << "long long " << sizeof n_llong << "bit" << endl;
    //c++ 코드에는 반드시 main의 함수가 있어야 한다.
    cout << "Hello World!" << endl;

    unsigned int u_int;
    unsigned short u_short;
    unsigned long u_long;
    unsigned long long u_llong;

    /*
     * 숫자로 시작할 수 없다 int 1
     * c++에서 사용하고 있는 키워드는 사용할수 없다 int return
     * white space를 사용할 수 없다(여백) int a a
     */
    int a;
    a = 105;
    char b = 105;
    cout << &b << endl;
    float f = 3.14;
    int c = 3.14;
    cout << "int = " << c << " float = " << f << endl;
    bool t = true;
    bool fa = false;
    cout << "t = " << t << " f = " << fa << endl;

    //변수는 사용되기 이전에 정의되어야 한다.
    //cout함수에서는 주소를 출력할 때는 해당 주소에 저장된 값을 출력하는 것이 아니라, 그 주소에 해당하는 메모리 주소에 있는 값들을 문자로 변환하여 출력
    //연속해서 출력되는 이유는 코드가 출력하는 것은 'b'변수가 할당된 1바이트 크기의 스택 메모리 공간을 포함한 주소 범위인데 'cout'함수는 해당 주소 범위 내에서 문자열을 찾아 출력하게 된다
    //이때 해당 메모리 공간이후의 다른 스택 메모리 공간이 문자열로 해석될 가능성이 있다.
    //static_cast<void*>는 char 포인터를 void포인터로 변환한다
    cout << "a = " << &a << " b = " << static_cast<void*>(&b) << endl;
    //char : 작은 문자형

    int r = 3;
    float s = r * r * PIE;
    cout << s << endl;

    //데이터형 변환
    int p = 3.141592;
    cout << p << endl; //3.141592에서 3만 출력됨 자동으로 데이터 형 변환

    //강제적으로 데이터현 변환
    //typeName(a) (typeName)a
    char ch = 'M';
    cout << (int)ch << " " << int(ch) << endl;

    //C++
    //static_cat<typeName>
    cout << static_cast<int>(ch) << endl;
    /*
     * +: 두 개의 피연산자의 합을 계산한다
     * -: 첫 번째 피연산자에서 두 번째 피연산자의 차를 계산한다.
     * *: 두 개의 피연산자의 곱을 계산한다.
     * /: 첫 번째 피연산자에서 두 번째 피연산자를 나눈다
     * >> 두개의 피연산자가 모두 정수이면 결과값은 '몫' 이다
     * %: 첫 번째 피연산자를 두 번째 피연산자로 나누어 나머지를 구한다.(ex 19 % 6 = 1)
     */

    int i = 10;
    int j = 3;

    cout << "10 + 3 = " << i+j << endl;
    cout << "10 - 3 = " << i-j << endl;
    cout << "10 * 3 = " << i*j << endl;
    cout << "10 / 3 = " << i/j << endl;
    cout << "10 % 3 = " << i%j << endl;

    //c++가 복잡한 산술 연산을 하면 우선순위를 따른다
    int multiple = j + i * j;
    cout << "3 + 10 * 3 = " << multiple << endl;

    //auto

    auto n = 100; //n은 int
    auto x = 1.5; //x는 double
    auto y = 1.3e12L; //y는 long double
    return 0;
}
