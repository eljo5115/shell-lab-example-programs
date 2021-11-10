//execDemo.c
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
		//A null terminated array of character
		//pointers
		int pid =  getpid();
		char *args[]={"./EXEC",NULL};
		printf("%s(pid=%d): Preparing to execute exec program\n", argv[0] ,pid);
		sleep(2);
		execvp(args[0],args);
	
		/*All statements are ignored after execvp() call as this whole
		process(execDemo.c) is replaced by another process (EXEC.c)
		*/
		printf("Ending-----");
	
	return 0;
}
