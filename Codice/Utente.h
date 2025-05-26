// ADT Utente
// Implementa il singolo utente

// Utente.h
#ifndef UTENTE_H
#define UTENTE_H
#include "Prestiti.h" // Un utente ha una lista di prestiti

struct utente {
    char nome[30];
    char cognome[30];
    prestiti prestiti_correnti;
};

typedef struct utente* utente;

// Funzioni dell'interfaccia
int crea_utente(utente* nuovo_utente, char nome[], char cognome[]);
int get_nome_utente(utente mio_utente, char nome[]);
int get_cognome_utente(utente mio_utente, char cognome[]);
int get_prestiti_utente(utente mio_utente, prestiti** lista_prestiti);
int set_nome_utente(utente mio_utente, char nome[]);
int set_cognome_utente(utente mio_utente, char cognome[]);
int distruggi_utente(utente* mio_utente);
void stampa_utente(utente mio_utente);

#endif