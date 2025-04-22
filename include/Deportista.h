// == Superclase deportista ==
// Se encarga de heredar a las clases futbolista, nadador y basquetbolista.
#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include <string>
using namespace std;

class Deportista{
    private:

    protected:
        string nombre;
        string cedula;
        int edad;
        string programa;
        int faltas;
        bool genero;

    public:
        // Setters
        void setNombre(string nombre);
        void setCedula(string cedula);
        void setEdad(int edad);
        void setPrograma(string programa);
        void setFaltas(int faltas);
        void setGenero(bool genero);

        // Getters
        string getNombre();
        string getCedula();
        int getEdad();
        string getPrograma();
        int getFaltas();
        bool getGenero();
};

#endif