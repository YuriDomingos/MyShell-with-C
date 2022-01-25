
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<syscall.h>
#include<unistd.h>
#include<string.h>
#include<unistd.h>


int main (void )
{

 char cmd[100], comamd[100], *parametro[20];

 // variaveis de ambientes 

 char *envp [] = { (char *) "PATH=/bin",0};

 while (1)
 {
     type_prompt();
     read_command( comamd, parametro);
 }


    return 0;
}