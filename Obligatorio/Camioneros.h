#ifndef CAMIONEROS_H_INCLUDED
#define CAMIONEROS_H_INCLUDED

#include "Camionero.h"
#include "Iterador.h"

class Camioneros
{
    private:
        struct NodoABB
        {
            Camionero * info; //colecci�n de punteros a due�os
            NodoABB * hizq;
            NodoABB * hder;
        };
        NodoABB * abb;

        ///Auxiliares:
        void DestruirArbol(NodoABB * &);
        bool PerteneceEnArbol(NodoABB *,long);
        void InsertarEnArbol(NodoABB * &, Camionero *);
        Camionero * ObtenerEnArbol(NodoABB *,long);
        void cargarIterador(NodoABB *, Iterador &); /// fijarse si aca va o no puntero a un iterdor???

    public:
        Camioneros();
        bool Member(long);
        void Insert(Camionero *);
        bool Empty();
        Camionero * Find(long);///Precondicion: si existe en el diccionario*/
        void listarCamioneros(Iterador &);
        //void listarCamioneroMaxTatuajes(Camionero*,&error);
        ///TODO: modulo tipo error
        ~Camioneros();

};

#endif // CAMIONEROS_H_INCLUDED