### q3

le premier fork crée un enfant.
le deuxieme fork fait que le parent crée un enfant et l'enfant d'avant crée un enfant.

le fork de la condition if verifie que le pid est > 0. Sous entendu, que le processus appelant n'est pas un enfant.

Si c'est un parent, un dernier fork est appelé.

Donc au total, on a 1 + 2 + 1 processus crée.

### q1.3

Un seul A sera afficher car le execl va rediriger l'execution du program.

Au total, un processus est utilisés. Le exec va executuer le progam sur le processus actuel.


