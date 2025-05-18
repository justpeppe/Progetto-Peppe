// ADT Persone
// Implementa la lista di persone registrate

#ifndef PERSONE_H
#define PERSONE_H

#include "Persona.h"

struct struttura_persone {
    persona p;
    struct struttura_persone* next;
};

typedef struct struttura_persone* persone;

int crea_persone(persone* lista_persone);

int inserisci_persona(persone* lista_persone, char nome[], char cognome[], char telefono[]);

persona cerca_persona(persone lista_persone, char nome[], char cognome[]);

int modifica_persona(persone lista_persone, char nome[], char cognome[], char nuovo_nome[], char nuovo_cognome[], char nuovo_telefono[]);

int elimina_persona(persone* lista_persone, char nome[], char cognome[]);

int destroy_persone(persone* lista_persone);

void stampa_persone(persone lista_persone);

#endif