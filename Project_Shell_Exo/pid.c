#include <stdio.h>
#include <unistd.h>

/**
 * main - PID du processus parent
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t parent_pid;

    parent_pid = getppid();  // Obtenir l'ID du processus parent
    printf("Parent PID: %u\n", parent_pid);  // Afficher l'ID du processus parent
    return (0);
}

