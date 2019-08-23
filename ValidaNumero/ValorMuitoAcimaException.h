#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H
#include <iostream>
#include <exception>
#include <string>

using namespace std;

class ValorMuitoAcimaException : public exception
{
    protected:
        string erro = "Valor Muito Acima";
    public:
        ValorMuitoAcimaException();
        virtual string what();
};

#endif //VALORMuitoAcimaEXCEPTION_H