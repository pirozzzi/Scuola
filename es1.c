 #include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
    pid_t pid;
    pid = fork();
    switch(pid) {
        case 1:
            printf("fork failed");
            break;
        case 0: // FIGLIO
            execl("/bin/ls", "ls", "­l", (char *)0);
            printf("exec failed"); // DI NORMA NON ESEGUITO
            break;
        default: // PADRE
            wait((int *)0);
            fflush(stdin);
            printf("ls completed\n");
            exit(0);
    }
}