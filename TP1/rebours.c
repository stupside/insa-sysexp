#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    // TODO: remplacer tout ce programme d'exemple par votre propre code !
    printf("Bonjour je suis '%s'\n",argv[0]);

    assert(argc == 2);

    // exemple d'usage de "atoi" et "assert"
    int value = atoi(argv[1]);
    assert(value != 0);
    printf("%s * %s = %d\n",argv[1],argv[1], value*value);

    return EXIT_SUCCESS;
}
