#ifndef OTORRINO_H
#define OTORRINO_H
#include "Medico.h"
#include <iostream>
#include <string>

class Otorrino : public Medico
{
    public:
        Otorrino(std::string nome, double peso, double altura);

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