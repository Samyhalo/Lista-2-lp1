#include "TesteValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"
#include <iostream>
#include <string>

using namespace std;

TesteValidaNumero::TesteValidaNumero()
{
}

void TesteValidaNumero::validaNumero(int num)
{
    if(num < 0)
    {
        throw ValorAbaixoException();
    }else if((num > 100) && (num < 1000))
    {
        throw ValorAcimaException();
    }else if(num > 1000)
    {
        throw ValorMuitoAcimaException();
    }
}