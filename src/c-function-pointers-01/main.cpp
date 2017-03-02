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

int* add(int x, int y)
{
    int* z = (int*)malloc(sizeof(int));
    *z = 10;
    return z;
}


int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
    int* t;
    void (*fpmsg)(int);         // function pointer variable to point to the function "mesg"
    int* (*addfptr)(int, int);  // function pointer variable to point to the function "add"

    addfptr = &add;     // assignment using "address of" operator
    fpmsg = mesg;       // assignment using implicit method


    _tsystem(_T("pause"));
    return 0;
}

