#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;

    int parentPid = getpid();

    printf("%d: i am the parent\n", parentPid);

    int childPid = fork();

    if(childPid != 0) {
        printf("%d: i am the children\n", childPid);
    }

    return EXIT_SUCCESS;
}
