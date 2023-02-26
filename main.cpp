#include <iostream> //전처리 지시자
#include <climits>

//std::cout, std::endl std를 생략하는것
using namespace std;

int main() {
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
    a = 7;

    int b = 5;
    //변수는 사용되기 이전에 정의되어야 한다.
    cout << "a = " << &a << " b = " << &b << endl;
    return 0;
}
