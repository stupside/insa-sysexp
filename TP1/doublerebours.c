#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/wait.h>

int main(int argc, char *argv[])
{
    char *prog = argv[1];

    int params = 2;

    for (int i = params; i < argc; i++)
    {
        int childPid = fork();

        if (childPid == 0)
        {
            execl(prog, prog, argv[i], NULL);
        }
    }

    for (int i = params; i < argc; i++)
    {
        wait(NULL);
    }

    return EXIT_SUCCESS;
}
