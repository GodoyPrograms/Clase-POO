#ifndef NADADOR_H
#define NADADOR_H

#include <string>
#include "Deportista.h"

using namespace std;

class Nadador : public Deportista{
    private:

    protected:
        string estilo;
        double metrosNadados;
    public:
        // Setters
        void setEstilo(string estilo);
        void setMetrosNadados(double metrosNadados);

        // Getters
        string getEstilo();
        double getMetrosNadados();
};

#endif