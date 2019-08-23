#include "ValorAbaixoException.h"
#include <iostream>
#include <string>

using namespace std;

ValorAbaixoException::ValorAbaixoException()
{
}

string ValorAbaixoException::what()
{
    return erro;
}
