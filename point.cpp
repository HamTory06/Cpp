//#include <iostream> //전처리 지시자
//#include <climits>
//#define SIZE 20
//#define _CRT_SECURE_NO_WARNINGS
//
//using namespace std;
//
//int main(){
//    //변수 선언 과정
//    int val = 3;
//    cout << &val << endl;
//    //C++: 객체지향 프로그래밍
//    /*
//     * 컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다.
//     * - 배열 생성
//     * 재래적 절차적 프로그래밍: 배열의 크기가 미리 결정
//     * 객체지향 프로그래밍: 배열의 크기를 실행 시간 결정
//     *
//     * 포인터: 사용할 주소에 이름을 붙인다.
//     * 포인터는 포인터의 이름이 주소를 나타낸다.
//     * 간접값 연산자, 간접 참조 연산자 *
//     */
//    int *point1; //c style
//    int* point2; //c++ style
//    int* point3, d;//point3는 포인터 변수, d는 int형 변수
//
//    int a = 6; //수
//    int* b; //위치
//
//    b = &a;
//
//    cout << "a의 값 " << a << endl;
//    cout << "*b의 값 " << *b << endl;
//
//    //a의 주소와 *b의 주소와 같다
//    cout << "a의 주소 " << &a << endl;
//    cout << "*b의 주소 " << b << endl;
//
//    *b = *b + 1;
//
//    cout << "이제 a의 값은 " << a << endl;
//
//    //new 연산자
//    /*
//     * 어떤 데이터형을 원하는지 new 연산자에게 알려주면,
//     * new 연산자는 그에 알맞은 크기의 메모리 블록을
//     * 찾아내고 그 블록의 주소를 리턴한다.
//     */
//
//    int test1;
//    int* test2 = &test1;
//
//    int* pointer = new int;
//
//    cout << "int형 변수 크기는 " <<sizeof(int) << endl;
//
//    //delete 연산자
//    /*
//     * 사용한 메모리를 다시 메모리 폴로 환수
//     * 환수된 메모리는 프로그램의 다른 부분이 다시사용
//     */
//
//    int* ps = new int;
//    //메모리 사용
//    delete ps;
//    /*
//     * 1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다.
//     * 2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다.
//     * 3. newp[]로 메모리를 대입할 경우 delete[]로 해제한다.
//     * 4. 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다.
//     */
//
//    double* p3 = new double[3]; //double형 데이터 3개를 저장할 수 있는 공간을 대입한다. p3를 배열 이름처럼 취급한다.
//    p3[0] = 0.2;
//    p3[1] = 0.5;
//    p3[2] = 0.8;
//
//    cout << "p3[1] is " << p3[1] << ".\n";
//    p3 = p3 + 1; //포인터를 증가시킨다.
//    cout << "Now p3[0] is " << p3[0] << " and ";
//    cout << "p3[1] is " << p3[1] << ".\n";
//    p3 = p3 - 1; //다시 시작 위치를 지시한다.
//    delete[] p3; //배열 메모리를 해제한다.
//
//    char* ps1;
//    char animal[SIZE];
//
//    cout << "동물 이름을 입력하십시오\n";
//    cin >> animal;
//
//    ps1 = new char[strlen(animal) + 1];
//    strcpy(ps1, animal); //animal의 값을 ps1에 복사
//
//    cout << "입력하신 동물 이름을 복사하였습니다" << endl;
//    cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " <<(int*)animal << " 입니다." << endl;
//    cout << "복사된 동물 이름은 " << ps1 << "이고, 그 주소는 " << (int*)ps1 << "입니다." << endl;
//
//    //동적 구조체 생성
//    struct MyStruct
//    {
//        char name[20];
//        int age;
//    };
//    MyStruct* temp = new MyStruct;
//
//    //temp -> name 이 코드랑 (*temp).name랑 같은 의미를 가진 코드이다
//    cout << "당신의 이름을 입력하십시오\n";
//    cin >> temp -> name;
//
//    cout << "당신의 나이를 입력하십시오\n";
//    cin >> (*temp).age;
//
//    cout << "안녕하세요! " << temp->name << "씨!\n";
//    cout << "당신은 " << temp -> age << "살 이군요!";
//
//    return 0;
//}