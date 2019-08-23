#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H
#include <iostream>
#include <exception>
#include <string>

using namespace std;

class ValorAcimaException : public exception
{
    protected:
        string erro = "Valor Acima";
    public:
        ValorAcimaException();
        virtual string what();
};

#endif //VALORAcimaEXCEPTION_H