/*
@Autor : Yuri Domingos 
Data   : 21 - 01 - 2021
Objectivo : Implementar o projecto de S.O 2 
*/


#include<stdio.h>
#include<string.h>
#include<unistd.h>
#define TAMANHO_COMANDO 100


 void apresentar_interface()
{

    printf("---------------------------------------------------------------------------------------------------------------*\n");
    printf("*                                                                                                              *\n");
    printf("*                                                                                                              *\n");
    printf("*                                   MINHA SHELL                                                                *\n");
    printf("*                                                                                                              *\n");
    printf("*                                                                                                              *\n");
    printf("*--------------------------------------------------------------------------------------------------------------*\n");


      
}

int main (void )
{
    char comandos[TAMANHO_COMANDO];


    // Chamada de função 

    apresentar_interface();
    printf(" hello world \n");

    return 0;
}


