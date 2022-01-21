
You are required to develop a simple Linux shell in C language “shell.c".
The shell has to perform the following requirements: - - The shell prompt is “"myshell>".
- Run commands either from current directory or from “/bin" directory using the "exec" system call.
- Support output redirection like "command> filename" using "dup" system call. Note: save the output of the comment in the (filename).
- Implement the “history shell command to list the last ten commands entered so far.
- Implement the "clear" shell command to empty the history commands.




#include<stdio.h>

#include<unistd.h>

#include<string.h>

int main()

{

char command[20]; //storing the input

while(1){

printf("myshell>");

scanf("%s",command);

if(strcmp(command,"history")==0) //HISTORY

{

char *tailPath="/usr/bin/tail";   //tail path

char *cmd="tail";   //tail is the command

char *filename="/home/Myshell/.bash_history"; //history is stored in .bash history file of a user's home directory

execlp(tailPath,cmd,filename,NULL);   //call execlp

}

else if(strcmp(command,"clear")==0)   //CLEAR

{

char *rmPath="/bin/rm"; //we can delete history file using rm command

char *cmd="rm";

char *filename="/home/Myshell/.bash_history";

execlp(rmPath,cmd,filename,NULL);

}

else

{

printf("Invalid command\n");

}

}

return 0;

}
