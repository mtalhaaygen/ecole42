#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>


void OnExit(int sNo)
{
    printf("Child Prog finised\n");
    exit(0);
}

// int main()
// {
// .   pid_t pid;
//     if ((pid = fork()) < 0)
//     {
//         perror("fork");
//         exit(EXIT_FAILURE);
//     }

//     if (pid == 0)
//     {
//         if (signal(SIGUSR1, OnExit) == SIG_ERR)
//         {
//             perror("signal");
//             exit(EXIT_FAILURE);
//         }
//         pause();
//     }
//     sleep(1); // child process’in signal fonksiyonunu işleyebilmesi için süre
//     if (kill(pid, SIGUSR1) == -1)
//         printf("kill basarisiz oldu\n");
//     if (wait(NULL) == -1)
//         printf("wait basarisiz oldu\n");
//     printf("Parent prog finised\n");
//     return 0;
// }

// int main()
// {
//     pid_t iPid = getpid(); /* Process gets its id.*/
//     // printf("%d-", iPid);≤
//     signal(SIGINT, OnExit);
//     while (1)
//     {
//         printf("%d\n", iPid);
//         // pause();
//         sleep(3);
//     }
// }

int main(){
   char ch;
   ft_printf("B: Breakfast\n");
   ft_printf("L: Lunch\n");
   ft_printf("D: Dinner\n");
   ft_printf("E: Exit\n");
   ft_printf("Enter your choice:");

    ch = getchar();

    switch (ch){
     case 'B' :
        ft_printf ("time for breakfast");
        break;
     case 'L' :
        printf ("time for lunch");
        break;
     case 'D' :
        printf ("time for dinner");
        break;
     case 'E' :
        return 0; /* return to operating system */
    }


   printf("talha reis");
   return 0;
}