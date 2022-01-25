/*
@Autor : Yuri Domingos 
Data   : 21 - 01 - 2021
Objectivo : Implementar o projecto de S.O 2 
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#define TAMANHO_COMANDO 100
#define EXECUTANDO 1


 void apresentar_interface()
{

    printf("---------------------------------------------------------------------------------------------------------------*\n");
    printf("*                                                                                                              *\n");
    printf("*                                                                                                              *\n");
    printf("*                                   MINHA SHELL  ( YURI DOMINGOS )                                             *\n");
    printf("*                                                                                                              *\n");
    printf("*                                                                                                              *\n");
    printf("*--------------------------------------------------------------------------------------------------------------*\n");
      
}


void espaco()
{
     printf("\n\n");
}

void ler_comando_introduzido(char comando[])
{
    printf("Digite um comando do sistema \n");
    scanf("%s",comando);
}

void verificar_comando_history( char comando_introduzido[])
{
    if ( strcmp(comando_introduzido, "history") == 0 )
    {
        // vamos ler o ficheiro que armazena o historico dos comandos introduzidos sistema operativo
        char *caminho_do_comando = "/usr/bin/tail"; // o tail, lista as últimas instâncias do ficheiro introduzido  
        char *comando = "tail";
        char *caminho_do_ficheiro_historico = "/home/yuri/.bash_history";

        // Efetuamos uma chamada de sistema, para executar o comando 

        execlp(caminho_do_comando, comando, caminho_do_ficheiro_historico, NULL);

        
    }
    else
    {
        printf("Comando não reconhecido \n");
    }

}

void apagar_informacoes_do_comando_history(char comando_introduzido[])
{
    if ( strcmp(comando_introduzido,"clear") == 0)
    {
        // vamos ler o comando que apaga dados no linux
         char *caminho_do_comando_rm  = "bin/rm";
         char *comando = "rm";
         char *caminho_do_ficheiro_historico = "/home/yuri/.bash_history";
         execlp(caminho_do_comando_rm,comando, caminho_do_ficheiro_historico,NULL);


    }
    else
    {
        printf("Erro, comando %s nao reconhecido ",comando_introduzido);
    }
    
}





int main (void )
{
    char comandos[TAMANHO_COMANDO];


    // Chamada de função 

    while(EXECUTANDO)
    {
       apresentar_interface();
       ler_comando_introduzido(comandos);
       espaco();
       verificar_comando_history(comandos);
       apagar_informacoes_do_comando_history(comandos);
       system("cls");
    }
  
   
    return 0;
}


