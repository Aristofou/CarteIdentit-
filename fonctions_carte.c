#include <stdio.h>
#include <stdlib.h>
#include "Struct_Proto.h"


void rajouterClient(ptCarteID ptClient)
{

    printf("Nom ?\n");
    fflush(stdin);
    gets((*ptClient).nom);
    printf("Prenom ?\n");
    fflush(stdin);
    gets((*ptClient).prenom);
    printf("Adresse ?\n");
    fflush(stdin);
    gets((*ptClient).adresse);
    printf("Code postal ?\n");
    fflush(stdin);
    gets((*ptClient).codePostal);
    printf("Ville ?\n");
    fflush(stdin);
    gets((*ptClient).ville);

}

void impressionFichier(ptCarteID ptClient)
{
    FILE * pFichier;

    pFichier = fopen("Carte_d'identite.txt", "a");
    if (pFichier!=NULL)
    {
        static int nClient = 1;
        char str[100];
        sprintf(str, "%d", nClient); //transtypage pour afficher dans le fichier

        fputs("Numero : ", pFichier);
        fputs(str, pFichier);
        fputs("\n", pFichier);
        nClient += 1;

        fputs("Nom : ", pFichier);
        fputs((*ptClient).nom, pFichier);
        fputs("\n", pFichier);


        fputs("Prenom : ", pFichier);
        fputs((*ptClient).prenom,pFichier);
        fputs("\n", pFichier);

        fputs("Adresse : ", pFichier);
        fputs((*ptClient).adresse,pFichier);
        fputs("\n", pFichier);

        fputs("Code postal : ", pFichier);
        fputs((*ptClient).codePostal,pFichier);
        fputs("\n", pFichier);

        fputs("Ville : ", pFichier);
        fputs((*ptClient).ville,pFichier);
        fputs("\n", pFichier);
        fputs("\n", pFichier);

    }

    fclose(pFichier);
}

void resetFichier()
{
    FILE * pFile;
    pFile = fopen("Carte_d'identite.txt", "w");
    fclose(pFile);
}

void afficherClient(ptCarteID ptClient)
{
    char buffer[125];

    FILE * pFichier;
    fopen("Carte_d'identite.txt", "r");

    while (fgets(buffer,128,pFichier))
   {
        printf("%s",buffer);


   }
    fclose(pFichier);
}

void LireFichier()
{
    FILE * pFile;
    char buffer [100];

   pFile = fopen ("Carte_d'identite.txt" , "r");//ouvre le fichier en mode read
   if (pFile == NULL)
   {
        perror ("Erreur"); //si pFile n'existe pas, ecrire "erreur"
   }

   else
   {
     while ( ! feof (pFile) ) //tant que ce n'est pas la fin du fichier
     {
       if( fgets (buffer , 100 , pFile) == NULL ) break;
       fputs (buffer , stdout);
     }
     fclose (pFile);//ferme le fichier
   }
}
