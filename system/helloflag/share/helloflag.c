// gcc -o basic_bof basic_bof.c -fno-stack-protector -no-pie -mpreferred-stack-boundary=4
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void alarm_handler()
{
    puts("TIME OUT");
    exit(-1);
}

void initialize()
{
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);

    signal(SIGALRM, alarm_handler);
    alarm(30);
}

void get_flag()
{
    execve("/bin/sh", NULL, NULL);
}

int main(int argc, char *argv[])
{
    initialize();
    int num = 0;
    
    printf("if you input 1, you can get flag!!\n");
    printf("Input :");
    scanf("%d", &num);

    if(num == 0){
    	printf("bye");
    }
    else{
    	printf("flag is in the flag file!");
	get_flag();
    }

    return 0;
}
