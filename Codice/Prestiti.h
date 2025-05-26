// ADT Prestiti
// Implementa la lista dei prestiti

// Prestiti.h
#ifndef PRESTITI_H
#define PRESTITI_H
#include "Prestito.h" // Assicurati che questo sia aggiornato

struct prestiti {
    prestito p;
    struct prestiti* next;
};

typedef struct prestiti* prestiti;


int crea_prestiti(prestiti* lista_prestiti);
int inserisci_prestito(prestiti* lista_prestiti, libro un_libro, int giorno, int mese, int anno);
prestito cerca_prestito(prestiti lista_prestiti, char chiave_titolo_libro[], int giorno_key, int mese_key, int anno_key);
int modifica_prestito(prestiti lista_prestiti, char chiave_titolo_libro[], int vecchio_giorno_key, int vecchio_mese_key, int vecchio_anno_key, int nuovo_giorno, int nuovo_mese, int nuovo_anno);
int elimina_prestito(prestiti* lista_prestiti, char chiave_titolo_libro[], int giorno_key, int mese_key, int anno_key);
int distruggi_prestiti(prestiti* lista_prestiti);
void stampa_prestiti(prestiti lista_prestiti);

#endif