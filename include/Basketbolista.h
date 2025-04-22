#ifndef BASKETBOLISTA_H
#define BASKETBOLISTA_H

#include <string>
#include "Deportista.h"

using namespace std;

class Basketbolista : public Deportista{
    private:

    protected:
        int puntos;
        string posicion;
        double altura;
        int rebotes;
        string asistencias;
        int faltas;

    public:
        // Setters
        void setPuntos(int puntos);
        void setPosicion(string posicion);
        void setAltura(double altura);
        void setRebotes(int rebotes);
        void setAsistencias(string asistencias);
        void setFaltas(int faltas);

        // Getters
        int getPuntos();
        string getPosicion();
        double getAltura();
        int getRebotes();
        string getAsistencias();
        int getFaltas();

};

#endif