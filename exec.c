//EXEC.c

#include<stdio.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int pid = getpid();
	printf("\nI am EXEC.c called by execvp() \n");
	printf("program name:%s(pid=%d): \n", argv[0] ,pid);
	printf("\n");
	
	return 0;
}
