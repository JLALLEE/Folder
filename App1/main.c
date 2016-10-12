/* 
 * File:   main.c
 * Author: Julie
 *
 * Created on 12 octobre 2016, 23:38
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {


    coucou();
    return (EXIT_SUCCESS);
}


void coucou()
{
    int age;
    printf("HELLO JULIE LALLEE");
    scanf("%d",&age);
    printf("Tu as %d ans", age);
}