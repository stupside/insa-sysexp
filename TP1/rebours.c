#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    assert(argc == 2);

    // exemple d'usage de "atoi" et "assert"
    int seconds = atoi(argv[1]);

    assert(seconds != 0);
    
    int pid = getpid();

    for(int index = 0; index <= seconds; index++){
        printf("%is pid: %i\n", seconds - index, pid);

        sleep(1);
    }

    return EXIT_SUCCESS;
}
