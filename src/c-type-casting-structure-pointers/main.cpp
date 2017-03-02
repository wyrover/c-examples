// console_template.cpp : Defines the entry point for the console application.
//

#include <SDKDDKVer.h>
#include <malloc.h>
#include <stdio.h>
#include <tchar.h>
#include <locale.h>
#include <iostream>

struct signature* extractsignature(struct data* d)
{
    struct signature* sig = (struct signature*)d;
    return sig;
}
struct id* extracted( struct data* d)
{
    struct id* idv = (struct id*)d;
    return idv;
}

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
    struct signature
    {
        char sign;
        char version;
    };
    struct id
    {
        char id;
        char platform;
    };
    struct data
    {
        struct signature sig;
        struct id idv;
        char data[100];
    };
    struct data* img;
    receivedata(img);
    struct signature* sign = extractsignature( &img);
    struct id* idval = extractid( &img);

    system("pause");
    return 0;
}

