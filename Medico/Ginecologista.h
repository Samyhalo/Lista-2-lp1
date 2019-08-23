#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include "Medico.h"
#include <iostream>
#include <string>

class Ginecologista : public Medico
{
    public:
        Ginecologista(std::string nome, double peso, double altura);

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