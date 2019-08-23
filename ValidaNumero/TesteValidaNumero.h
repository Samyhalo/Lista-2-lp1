#ifndef TESTEVALIDANUMERO_H
#define TESTEVALIDANUMERO_H
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"
#include <iostream>
#include <string>

using namespace std;

class TesteValidaNumero
{
    public:
        TesteValidaNumero();

        void validaNumero(int num);
    
    protected:
        int num;
};

#endif //TESTEVALIDANUMERO_H