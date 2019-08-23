#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include "Medico.h"
#include <iostream>
#include <string>

class Oftalmologista : public Medico
{
    public:
        Oftalmologista(std::string nome, double peso, double altura);

        void RealizarOperacao();

        std::string getEspecializacao();
        std::string getNome();
        double getAltura();
        double getPeso();

        void setNome(std::string nome);
        void setAltura(double altura);
        void setPeso(double peso);
};

#endif