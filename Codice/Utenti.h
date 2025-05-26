// ADT Utenti
// Implementa la lista di utenti

// utenti.h
#ifndef UTENTI_H
#define UTENTI_H
#include "Utente.h"

struct utenti {
    utente u;
    struct utenti* next;
};

typedef struct utenti* utenti;

// Funzioni dell'interfaccia
int crea_utenti(utenti* lista_utenti);
int inserisci_utente(utenti* lista_utenti, char nome[], char cognome[]); // Inserimento ordinato per nome
utente cerca_utente(utenti lista_utenti, char chiave_cognome[]); // Ricerca per cognome (o nome e cognome?)
int modifica_utente(utenti lista_utenti, char chiave_cognome[], char nuovo_nome[], char nuovo_cognome[]);
int elimina_utente(utenti* lista_utenti, char chiave_cognome[]);
int distruggi_utenti(utenti* lista_utenti);
void stampa_utenti(utenti lista_utenti);

#endif