#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include "QString"

class NodoSimple{
    private:
        QString nombre;
        QString id;
    public:
        NodoSimple* siguiente;
        NodoSimple();
        NodoSimple(QString nombre, QString id);
        QString getNombre();
        QString getId();
        void setNombre(QString nombre);
        void setId(QString id);
};

class ListaSimple{
    private:
        NodoSimple* primero;
        NodoSimple* ultimo;
        bool insertarPrimero(NodoSimple* nodo);
    public:
        ListaSimple();
         void insertar(NodoSimple* node);
};

#endif // LISTASIMPLE_H
