#ifndef STRUCT_PROTO_H_INCLUDED
#define STRUCT_PROTO_H_INCLUDED

typedef struct tCarteID{

    int id;
    char nom[255];
    char prenom[255];
    char adresse[255];
    char codePostal[10];
    char ville[255];

}tCarteID, *ptCarteID;


extern void rajouterClient(ptCarteID ptClient);
extern void impressionFichier(ptCarteID ptClient);
extern void resetFichier();
extern void afficherClient(ptCarteID ptClient);
extern void LireFichier();

#endif // STRUCT_PROTO_H_INCLUDED
