#include <stdio.h>
#include <stdlib.h>
struct etudiant{
    char nom[20];
    int age;
};
int main()
{
    int numEtudiant;
    printf("Entrer le nombre d'etudiant: ");
    scanf("%d", &numEtudiant);

    struct etudiant etudiants[numEtudiant];

    for(int i = 0; i<numEtudiant; i++){
        printf("Entrez le nom de l'étudiant:\n");
        scanf("%s", etudiants[i].nom);
        printf("Entrez l'age de l'étudiant:\n");
        scanf("%s", &etudiants[i].age);
        printf("Ajout avec succes\n");
    }
    return 0;
}
