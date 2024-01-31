#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char* argv[])
{
    printf("Bonjour je suis '%s'\n",argv[0]);

    for(int i=0;i<argc;i++)
        printf("argv[%d]='%s'\n",i,argv[i]);

    printf("A\n");

    execl("./rebours", "./rebours", "5", NULL);

    printf("A\n");

    return EXIT_SUCCESS;
}
