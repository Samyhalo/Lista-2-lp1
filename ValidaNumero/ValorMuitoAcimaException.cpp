#include "ValorMuitoAcimaException.h"
#include <iostream>
#include <string>

using namespace std;

ValorMuitoAcimaException::ValorMuitoAcimaException()
{
}

string ValorMuitoAcimaException::what()
{
    return erro;
}
