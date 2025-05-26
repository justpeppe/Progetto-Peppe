// ADT Libri
// Implementa la lista di libri

// Libri.h
#ifndef LIBRI_H
#define LIBRI_H
#include "Libro.h"

struct libri {
    libro l;
    struct libri* next;
};

typedef struct libri* libri;

// Funzioni dell'interfaccia
int crea_libri(libri* lista_libri);
int inserisci_libro(libri* lista_libri, char titolo[], char nome_autore[], char cognome_autore[]); // Inserimento ordinato
libro cerca_libro(libri lista_libri, char chiave_titolo[]);
int modifica_libro(libri lista_libri, char chiave_titolo[], char nuovo_titolo[], char nuovo_nome_autore[], char nuovo_cognome_autore[]);
int elimina_libro(libri* lista_libri, char chiave_titolo[]);
int distruggi_libri(libri* lista_libri);
void stampa_libri(libri lista_libri);

#endif