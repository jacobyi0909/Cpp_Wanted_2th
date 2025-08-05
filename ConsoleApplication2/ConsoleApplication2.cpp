
#include <iostream>
#include "Add.h"

// 1. 자료형과 변수
// 2. 조건문
// 3. 반복문
// 4. 함수
// 5. 클래스 (OOP, 객체(Object)지향(Oriented)프로그래밍)

// 1, 2, 3
// 10, 20, 30

int Add(int a, int b, int c)
{
    return a + b + c;
}

float Add(float a, float b)
{
    return a + b;
}

int main()
{
    // 함수 = function = 기능
    int ret = Add(19.f, 10.f);  // 호출
    std::cout << ret << std::endl;

    // i의 값을 모두 더해서 출력하세요.
    // i가 짝수일때만
    /*int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        if ( i % 2 == 0 )
        {
            sum += i;
        }
    }
    std::cout << sum << std::endl;*/


    //// 조건문
    //// isGood 의 값이 10보다 작으면 OK
    //// 그렇지 않고 10보다 크고 20보다 작으면 Yes
    //// 이도저도 아니면 Out
    //int isGood = 1;
    //if (10 > isGood)
    //{

    //}
    //else if (10 < isGood && 20 > isGood)
    //{

    //}
    //else
    //{

    //}

    //int ar[10]{ 0 };
    //// 반복문
    //for (int i = 0; i<10   ; i++  )
    //{
    //    ar[i] = i;
    //}
    //for (int i = 0; i < 10; i++)
    //{
    //    std::cout << ar[i] << std::endl;
    //} 


    //// 배열?
    //int ar[2]{0};
    ////ar == &ar[0]
    //ar[0] = 10;

    //int* pAr = ar;
    //std::cout << "pAr : " << *(pAr + 1) << std::endl;


    //int aa = 10; // 변수
    //const int c = 10; // 상수 (constant)

    //// 포인터
    //int a = 10;
    //int b = 100;
    //const int * const pA = &a;
    ////*pA = 100;
    ////pA = &b;

    ////int** ppA = &pA;
    ////**ppA = 1000;

    //std::cout << "ppA가 가리키는 곳의 최종값 : " << a << std::endl; 
  //  std::cout << "a : " << a << std::endl; 
  //  std::cout << "pA : " << pA << std::endl; 

    /*
    // 정수형(Integer, int) -3, 0, 39
    int 정수 = 10;
    // 실수형(float) -3.5f, 0.0f, 38.7f
    float 실수 = 1.34f;
    // 논리형(Boolean, bool) true, false
    bool 논리 = true;
    // 문자(char) '가'
    char 문자 = 'a';
    // 문자열은 연속된 char들
    const char* 문자열 = "Jacobyi";
    // 커스텀자료형(Class)
    */
    //std::cout << "Hello World!\n";
}


