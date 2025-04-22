#ifndef FUTBOLISTA_H
#define FUTBOLISTA_H

#include <string>
#include "Deportista.h"

using namespace std;

class Futbolista : public Deportista{
    private:

    protected:
        string posicion;
        int goles;
        string asistencias;

    public:
        // Setters
        void setPosicion(string posicion);
        void setGoles(int goles);
        void setAsistencias(string asistencias);

        // Getters
        string getPosicion();
        int getGoles();
        string getAsistencias();

};

#endif