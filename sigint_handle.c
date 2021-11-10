#include<stdio.h>
#include<sys/wait.h>
#include<signal.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int stat;
    pid_t pid;
    if ((pid = fork()) == 0){
         printf("Inside child process\nWaiting to recieve SIGINT");
        while(1);
    }
       
    else
    {
        printf("Parent sendign SIGINT to child process(%d)\n", pid);
        sleep(7);  //Parents sleeps for 7 Sec
        kill(pid, SIGINT);
        wait(&stat);
        if (WIFSIGNALED(stat))
            psignal(WTERMSIG(stat), "Child term due to");     /*The psignal() function displays a message on stderr consisting ofthe string s, a colon, a space, a string describing the signalnumber sig, and a trailing newline*/
    }
    return 0;
}