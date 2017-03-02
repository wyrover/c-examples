// console_template.cpp : Defines the entry point for the console application.
//

#include <SDKDDKVer.h>
#include <malloc.h>
#include <stdio.h>
#include <tchar.h>
#include <locale.h>
#include <iostream>

void mesg(int num)
{
    printf("Mesg no. %d\n", num);
}

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
    int* t;
    void (*fpmsg1)(int);    // function pointer variable to point to the function "mesg"
    void (*fpmsg2)(int);    // function pointer variable to point to the function "mesg"

    fpmsg1 = mesg;
    fpmsg2 = mesg;
    
    fpmsg1(10);             // implicit method of invoking a function
   // (*)fpmsg2(20);          // explicit way of invoking a function

    system("pause");
    return 0;
}

