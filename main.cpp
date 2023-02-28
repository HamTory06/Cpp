//#include <iostream> //전처리 지시자
//#include <climits>
////#define PIE 3.1415926535 c언어에서 사용하는 방법
//
////std::cout, std::endl std를 생략하는것
//using namespace std;
//
//int main() {
//
//    const float PIE = 3.1415926535;
////    PIE = 10; error 한번 지정하면 변경할수 없음
//
//    int n_int = INT_MAX;
//    short n_short = SHRT_MAX;
//    long n_long = LONG_MAX;
//    long long n_llong = LLONG_MAX;
//
//    cout << "int " << sizeof n_int << "Byte" << endl;
//    cout << "short " << sizeof n_short << "Byte" << endl;
//    cout << "long " << sizeof n_long << "Byte" << endl;
//    cout << "long long " << sizeof n_llong << "Byte" << endl;
//    //c++ 코드에는 반드시 main의 함수가 있어야 한다.
//    cout << "Hello World!" << endl;
//
//    unsigned int u_int;
//    unsigned short u_short;
//    unsigned long u_long;
//    unsigned long long u_llong;
//
//    /*
//     * 숫자로 시작할 수 없다 int 1
//     * c++에서 사용하고 있는 키워드는 사용할수 없다 int return
//     * white space를 사용할 수 없다(여백) int a a
//     */
//    int a;
//    a = 105;
//    char b = 105;
//    cout << &b << endl;
//    float f = 3.14;
//    int c = 3.14;
//    cout << "int = " << c << " float = " << f << endl;
//    bool t = true;
//    bool fa = false;
//    cout << "t = " << t << " f = " << fa << endl;
//
//    //변수는 사용되기 이전에 정의되어야 한다.
//    //cout함수에서는 주소를 출력할 때는 해당 주소에 저장된 값을 출력하는 것이 아니라, 그 주소에 해당하는 메모리 주소에 있는 값들을 문자로 변환하여 출력
//    //연속해서 출력되는 이유는 코드가 출력하는 것은 'b'변수가 할당된 1바이트 크기의 스택 메모리 공간을 포함한 주소 범위인데 'cout'함수는 해당 주소 범위 내에서 문자열을 찾아 출력하게 된다
//    //이때 해당 메모리 공간이후의 다른 스택 메모리 공간이 문자열로 해석될 가능성이 있다.
//    //static_cast<void*>는 char 포인터를 void포인터로 변환한다
//    cout << "a = " << &a << " b = " << static_cast<void*>(&b) << endl;
//    //char : 작은 문자형
//
//    int r = 3;
//    float s = r * r * PIE;
//    cout << s << endl;
//
//    //데이터형 변환
//    int p = 3.141592;
//    cout << p << endl; //3.141592에서 3만 출력됨 자동으로 데이터 형 변환
//
//    //강제적으로 데이터현 변환
//    //typeName(a) (typeName)a
//    char ch = 'M';
//    cout << (int)ch << " " << int(ch) << endl;
//
//    //C++
//    //static_cat<typeName>
//    cout << static_cast<int>(ch) << endl;
//    /*
//     * +: 두 개의 피연산자의 합을 계산한다
//     * -: 첫 번째 피연산자에서 두 번째 피연산자의 차를 계산한다.
//     * *: 두 개의 피연산자의 곱을 계산한다.
//     * /: 첫 번째 피연산자에서 두 번째 피연산자를 나눈다
//     * >> 두개의 피연산자가 모두 정수이면 결과값은 '몫' 이다
//     * %: 첫 번째 피연산자를 두 번째 피연산자로 나누어 나머지를 구한다.(ex 19 % 6 = 1)
//     */
//
//    int i = 10;
//    int j = 3;
//
//    cout << "10 + 3 = " << i+j << endl;
//    cout << "10 - 3 = " << i-j << endl;
//    cout << "10 * 3 = " << i*j << endl;
//    cout << "10 / 3 = " << i/j << endl;
//    cout << "10 % 3 = " << i%j << endl;
//
//    //c++가 복잡한 산술 연산을 하면 우선순위를 따른다
//    int multiple = j + i * j;
//    cout << "3 + 10 * 3 = " << multiple << endl;
//
//    //auto
//
//    auto n = 100; //n은 int
//    auto x = 1.5; //x는 double
//    auto y = 1.3e12L; //y는 long double
//    //정수형: 소수부가 없는 수
//    //음의 정수, 0, 양의 정수
//    //short, int, long, long long
//
//    /*
//     * 배열(array) : 같은 데이터형의 집합
//     * typeName arrayName[arraySize]
//     * 배열 원소에 대입할 값들을 콤마로 구분하여 중괄호로 묶어 선언한다.
//     * 초기화를 선언이후 나중에 할 수는 없다.
//     * 배열을 다른 배열에 통째로 대힙할수 없다.
//     * 초기화 값의 개수를 배열 원소의 개수보다 모자라게 제공할 수 있다.
//     * 배열을 부분적으로 초기화하면. 나머지 원소들은 0으로 설정한다.
//     * 배열을 초기화할때 대괄호 속을 비워두면 컴파일러가 초기화 값의 개수를 헤아려 배열 원소 개수를 저장한다
//     */
//    short month[12] = {1,2,3}; //선언
//    cout << month[1] << endl;
//    char hello[] = {'H','e','l','l','o'};
//    cout << hello << endl;
//    char hello2[] = "Hello";
//    cout << hello2 << endl;
//
////    const int Size = 15;
////    char name1[Size]; //비어있는 배열
////    char name2[Size] = "C++programing"; //문자열 상수로 초기화된 배열
////    cout << "안녕하세요! 저는 " << name2;
////    cout << "입니다! 성함이 어떻게 되시나요?\n";
////    cin.get(name1, Size);
////    cout << "음, " << name1 << "씨, 당신의 이름은 ";
////    cout << strlen(name1) << " 자입니다만\n";
////    cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다. \n";
////    cout << "이름이" << name1[0] << " 자로 시작하는군요. \n";
////    name2[3] = '\0';
////    cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
////    cout << name2 << endl;
//
//    //C++에서 문자열을 다루는 방법 중 하나인 string
//    /*
//     * C스타일로 string 객체를 초기화할수 있다.
//     * cin을 사용하려 string 객체에 키보드 입력을 저장할 수 있다.
//     * cout을 사용하여 string 객체를 디스플레이할 수 있다.
//     * 배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.
//     *
//     * 배열을 다른 배열에 통째로 대입할수 없다.
//     * >> string에서는 가능함
//     */
//
//    char char1[20];
//    char char2[20] = "jauar";
//    string str1;
//    string str2 = "panda";
////    char1 = char2 error
//    str1 = str2;
//    cout << str1[0] << endl;
//
//    //구조체: 다른 데이터형이 허용되는 데이터의 집합
//    //배열: 같은 데이터형의 집합
//
//    //축구선수
//    struct MyStruct{
//        string name;
//        string position;
//        int height;
//        int weight;
//    };
//
////    MyStruct A = {
////            "Son",
////            "Striker",
////            183,
////            77
////    };
////    cout << A.name << endl;
////    cout << A.position << endl;
////    cout << A.height << endl;
////    cout << A.weight << endl;
////
//    MyStruct A[2] ={
//            {"A","A",1,1},
//            {"B","B",2,2}
//    };
//
//    cout << A[0].name << endl;
//
//    union MyUnion
//    {
//        int intVal;
//        long longVal;
//        float floatVal;
//    };
//
//    MyUnion test;
//    test.intVal = 3;
//    cout << test.intVal << endl;
//    test.longVal = 33;
//    cout << test.longVal << endl;
//    test.floatVal = 3.3;
//    cout << test.floatVal << endl;
//
//    //열거체(enum)
//    //기호 상수를 만드는 것에 대한 또다른 방법.
//
//    enum spectrum
//    {
//        red = 0 ,orange = 2, yellow = 1, green, blue, vialet, indigo, ultraiolet //열거자들을 초기화 할때는 정수로 초기화 해야한다 초기화 하지 않은 열거자들은 그 이전의 열거자의 값보다
//        //1씩 더한 값을 가지게 된다.
//        /*
//         * stectrum을 새로운 데이터형 이름으로 만든다
//         * red, orange, yellow.. 0에서 7까지 정수 값을 각각 나타내는 기호 상수로 만든다
//         */
//    };
//    spectrum spectrum1 = green;
//    //열거체를 새로 선언 할때는 미리 명시한 열거자들만 값에 대입 할수 있음 열거자들의 산술 연산은 허용하지 않는다.
//    cout << spectrum1 << endl;
//    //변수를 새로 만들어 역거자들을 대입하여 계산 할수 있음
//    int w = orange;
//
//    return 0;
//}
