#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/wait.h>

int main(int argc, char *argv[])
{
    char *prog = argv[1];

    int idxOfmax = 2;
    int idxOfParams = 3;

    int max = atoi(argv[idxOfmax]);

    int runningSubProcesses = 0;

    for (int paramIdx = 0; paramIdx < argc - idxOfParams; paramIdx++)
    {
        if(max == runningSubProcesses){
            for(int i = 0; i < runningSubProcesses; i ++){
                wait(NULL);
            }
        }

        int childPid = fork();

        runningSubProcesses++;

        if (childPid == 0)
        {
            execl(prog, prog, argv[paramIdx + idxOfParams], NULL);
        }
    }

    for(int i = 0; i < runningSubProcesses; i ++){
        wait(NULL);
    }

    return EXIT_SUCCESS;
}
