#ifndef MEDICO_H
#define MEDICO_H
#include <iostream>
#include <string>

class Medico
{
    public:
        Medico();

        virtual void RealizarOperacao()=0;

        std::string getEspecializacao();
        std::string getNome();
        double getAltura();
        double getPeso();

        void setNome(std::string nome);
        void setAltura(double altura);
        void setPeso(double peso);

    protected:
        std::string nome;
        std::string especialidade;
        double altura;
        double peso;

};

#endif //MEDICO_H