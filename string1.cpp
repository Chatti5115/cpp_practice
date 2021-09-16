//
// Created by Yu-jin Kim on 2021/09/16.
//

#include <stdio.h>
#include <cstring>

int main()
{
    char s1[32] = "hello";
    const char* s2 = "world";

    //s1= s2
    strcpy(s1, s2);

    //if (s1 ==s2){} // 비교
    if( strcmp(s1, s2) == 0){}

}

/*
 c 언어와 cpp  언어에서의 문자열 처리 방법

 1. c 언어에서의 문자열
  -> char*



*/