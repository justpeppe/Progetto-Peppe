// ADT Prestito
// Implementa il singolo prestito collegandolo ad un libro e ad una persona

#ifndef PRESTITO_H
#define PRESTITO_H

#include "Libro.h"
#include "Persona.h"

struct struttura_prestito {
    libro l;
    persona p;
};

typedef struct struttura_prestito* prestito;

int crea_prestito(prestito* nuovo_prestito, libro l, persona p);

int get_libro(prestito pr, libro* l);
int get_persona(prestito pr, persona* p);

int set_libro(prestito pr, libro l);
int set_persona(prestito pr, persona p);

int stampa_prestito(prestito pr);

int destroy_prestito(prestito* pr);

#endif