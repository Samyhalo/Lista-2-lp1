#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#include <iostream>
#include <exception>
#include <string>

using namespace std;

class ValorAbaixoException : public exception
{
    protected:
        string erro = "Valor Abaixo";
    public:
        ValorAbaixoException();
        virtual string what();
};

#endif //VALORABAIXOEXCEPTION_H