#include"sol5.h"
int main()
{
int tmp,status;
tmp=fork();
if(tmp<0)
{
printf("error");
}
else if(tmp==0)
{
execlp("gcc","gcc","gccfile.c","-o","output",NULL);
exit(0);
}
else
{
waitpid(-1,&status,0);
printf("child is created\n");
printf("status is %d",WEXITSTATUS(status));
}
}
