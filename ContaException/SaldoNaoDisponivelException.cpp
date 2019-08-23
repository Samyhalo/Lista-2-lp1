#include "SaldoNaoDisponivelException.h"
#include <iostream>
#include <string>

using namespace std;

SaldoNaoDisponivelException::SaldoNaoDisponivelException()throw()
{
}

string SaldoNaoDisponivelException::what()
{
    return erro;
}