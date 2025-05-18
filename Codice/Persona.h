// ADT Persona
// Implementa la singola persona

#ifndef PERSONA_H
#define PERSONA_H

struct struttura_persona {
    char nome[20];
    char cognome[20];
    char telefono[14];
    int prestiti; // contatore dei prestiti
};

typedef struct struttura_persona* persona;

int crea_persona(persona* nuova_persona, char nome[], char cognome[], char telefono[]);

int get_nome(persona mia_persona, char nome[]);
int get_cognome(persona mia_persona, char cognome[]);
int get_telefono(persona mia_persona, char telefono[]);
int get_prestiti(persona mia_persona, int* prestiti);

int set_nome(persona mia_persona, char nome[]);
int set_cognome(persona mia_persona, char cognome[]);
int set_telefono(persona mia_persona, char telefono[]);
int set_prestiti(persona mia_persona, int prestiti);

int destroy_persona(persona* mia_persona);

int stampa_persona(persona mia_persona);

#endif