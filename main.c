#include <stdio.h>

void main() {
    int nbEleves;
    int nbNotes;
    float moyenneClasse = 0;
    float noteMax = 0;
    float noteMin = 1*10^37;
    printf("Nombre d'eleve: "); // demande du nombre total d'élève
    scanf("%i", &nbEleves);
    printf("Nombre de notes par eleves: "); // demande du nombre de notes par élève
    scanf("%i", &nbNotes);
    float eleves[nbEleves][nbNotes]; // initialisation du tableau avec les valeurs demandé précédement
    printf("Merci de rentrer les notes des eleves un par un.\n");
    for (int j = 0; j < nbEleves; j++) { // for pour chaque eleve
        printf("\neleve numero %i : \n", j+1);
        float moyenne = 0;
        for (int i = 0; i < nbNotes; i++) { // for pour chaque note
            printf("note numero %i: ", i+1);
            scanf("%f", &eleves[j][i]);
            if (noteMax < eleves[j][i]) // on vérifie si la nouvelle note est la maximal ou pas
                noteMax = eleves[j][i];
            if (noteMin > eleves[j][i]) // on verifie si la nouvelle note est la minumal ou pas
                noteMin = eleves[j][i];
            moyenne = moyenne + eleves[j][i]; // somme de toutes les notes d'un eleve
        }
        printf("\nLa moyenne de l'eleve n'%i est de: %f",j+1, moyenne/nbNotes); // affichage de la moyenne des notes rntrées précédement
        moyenneClasse = moyenneClasse + moyenne/nbNotes; // somme de toutes les moyennes de tout les eleves
    }
    printf("\nLa moyenne est pour %i eleves est de: %f",nbEleves, moyenneClasse/nbEleves); // affichage de la moyenne total, not maximal et note mini
    printf("\nLa note maximum est: %f", noteMax);
    printf("\nLa note la plus petite est: %f\n", noteMin);}
