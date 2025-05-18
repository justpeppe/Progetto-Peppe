// ADT Prestiti
// Implementa la lista dei prestiti

#ifndef PRESTITI_H
#define PRESTITI_H

#include "Prestito.h"

struct struttura_prestiti {
    prestito p;
    struct struttura_prestiti* next;
};

typedef struct struttura_prestiti* prestiti;

int crea_prestiti(prestiti* lista_prestiti);

int inserisci_prestito(prestiti* lista_prestiti, libro l, persona p);

prestito cerca_prestito(prestiti lista_prestiti, libro l, persona p);

int elimina_prestito(prestiti* lista_prestiti, libro l, persona p);

int destroy_prestiti(prestiti* lista_prestiti);

void stampa_prestiti(prestiti lista_prestiti);

#endif