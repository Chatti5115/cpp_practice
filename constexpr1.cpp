//
// Created by Yu-jin Kim on 2021/09/14.
//
//
//
//int main(){
//    const int c1 = 10;
//    c1 = 20;
//
//    constexpr int c2 = 10;
//    c2 = 20;
//
//
//}


//int main(){
//
////    foo(10);
////    foo(n);
//    int arr1[10]; //ok
//
//    int s1 = 10;
////    int arr2[s1]; //g++ : ok , cl:error
//
//    const int s2 = 10;
//    int arr3[s2] //ok
//
////    const int s3 = s1;
////    int arr4[s3];
//
//}

//
//void foo(const int s){
//    int arr[s];
//}
//int main(){
//    int n = 10;
//    const int c1 = 10; //컴파일 시간 상수, 배열 크기
//    const int c2 = n; // 실행시간 상수, 배열 크기 안됨
//
//    constexpr int c3 = 10; // ok
//    constexpr int c4 = n;// error
//}


//int main(){
//    /*
//     * constexpr : 컴파일 시간에 결정되는 상수 값 으로만 초기화 할 수 있음
//     * */
//    const int c1 = 10;
//    c1 = 20;
//
//    constexpr int c2 = 10;
//    c2 = 20;
//
//
//}

#include <MacTypes.h>

//void foo(const int s)
//{
//    int arr[s];
//}



//int main(){
//
////    foo(10);
////    foo(n);
//    int arr1[10]; //ok
//    int s1 = 10;
////    int arr2[s1]; //g++ : ok , cl :error
//
//    const int s2 = 10;
//    int arr3[s2];   //ok
//
////    const int s3 = s1;
////    int arr4[s3];   //error
//
//
//}

//int main()
//{
//    int n = 10;
//
//    const int c1 = 10;  //컴파일 시간 상수, 배열 크기
//    const int c2 = n;   // 실행시간 상수, 배열 크기 안됨...
//
//    constexpr int c3 = 10;  // ok
//    constexpr int c4 = n;   // error
//
//}
/*

 const  : 컴파일 시간 상수와 실행 시간 상수를 모두 만들 수 있다
        : 변수 값으로 초기화 할 수 있다

 constexpr  : 컴파일 시간 상수만 만들 수 있다.
            : 컴파일 시간에 계산 될 수 있는 값으로만 초기화 가능
            : 탬플릿 인자로 사용될 수 있다.

*/