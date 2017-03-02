// console_template.cpp : Defines the entry point for the console application.
//

#include <SDKDDKVer.h>
#include <malloc.h>
#include <stdio.h>
#include <tchar.h>
#include <locale.h>
#include <iostream>


#define BIG_ENDIAN 0
#define LITTLE_ENDIAN 1
int endian()
{
    short int word = 0x0001;
    char *byte = (char *) &word;
    return (byte[0] ? LITTLE_ENDIAN : BIG_ENDIAN);
}

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
    int value;
    value = endian();

    if (value == 1)
        printf("The machine is Little Endian\n");
    else
        printf("The machine is Big Endian\n");

    return 0;
    system("pause");
    return 0;
}

