#include<stdio.h>
#include<unistd.h>
int main()
{
 pid_t pid;
 pid = fork();
 if(pid == 0)
printf("i am child\n");
else 
printf("i am parent\n");
return 0;
}
