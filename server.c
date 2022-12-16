#include <unistd.h>
// #include <stdlib.h>
#include <signal.h>
#include <stdio.h>

#include "ft_printf/ft_printf.h"

void handler(int num)
{
    write(STDOUT_FILENO, "I won't die!\n",13);
    printf("signal %d", num);
}
void seghandler(int num)
{
    write(STDOUT_FILENO, "Seg Fault!\n",10);
    //exit("deneme");
}
int main()
{
    // char *p = NULL;


    ft_printf("%d",signal(SIGINT, handler));
    ft_printf("%d",signal(SIGSEGV, seghandler));
    
    // signal(SIG_ERR, handler);
    // signal(SIGUSR1, handler);
    // signal(SIGUSR2, handler);

    //*p = "talha"; // segmentation fault
    perror("recieved signal error");
    while (1)
    {
        printf("pid : %d\n", getpid());
        pause();    
    }
}