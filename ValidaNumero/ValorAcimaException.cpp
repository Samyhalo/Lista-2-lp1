#include "ValorAcimaException.h"
#include <iostream>
#include <string>

using namespace std;

ValorAcimaException::ValorAcimaException()
{
}

string ValorAcimaException::what()
{
    return erro;
}
