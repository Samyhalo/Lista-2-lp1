#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H
#include <iostream>
#include <exception>

using namespace std;

class SaldoNaoDisponivelException : public exception
{
    public:
        SaldoNaoDisponivelException()throw();

        virtual string what();

    protected:
        string erro = "Saldo nao disponivel";
};

#endif //SALDONAODISPONIVELEXCEPTION_H