#include <stdio.h>
#include <stdlib.h>
#include "Struct_Proto.h"

int main()
{
    //------------- Variables ----------------------//
    tCarteID client;
    client.id = 1;
    ptCarteID ptClient = &client;
    int nChoix = 0;

    //------------- Traitement ---------------------//

    printf("//------------------------------------//\n\n");
    printf("Bonjour, veuillez choisir votre action :\n\n");

    while(nChoix != 50)
    {
    printf("1 pour rajouter un client\n2 pour reset le fichier\n3 pour afficher\nAutre pour quitter\n");
    scanf("%d", &nChoix);

        switch(nChoix)
        {
            case 1 : rajouterClient(ptClient);impressionFichier(ptClient);break;
            case 2 : resetFichier();break;
            case 3 : afficherClient(ptClient);break;
            case 4 : LireFichier();break;
            default : exit(0);
        }
    }


    return 0;
}



