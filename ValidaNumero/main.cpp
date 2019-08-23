#include "TesteValidaNumero.h"

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    TesteValidaNumero *test = new TesteValidaNumero();

    try
    {
        test->validaNumero(-5);
    }
    catch(ValorAbaixoException e) 
    {
        cerr << e.what() << '\n';
    }
    catch(ValorAcimaException e) 
    {
        cerr << e.what() << '\n';
    }
    catch(ValorMuitoAcimaException e) 
    {
        cerr << e.what() << '\n';
    }
    catch(...) 
    {
        cerr << "Nao encontrado" << '\n';
    }

    try
    {
        test->validaNumero(200);
    }
    catch(ValorAbaixoException e) 
    {
        cerr << e.what() << '\n';
    }
    catch(ValorAcimaException e) 
    {
        cerr << e.what() << '\n';
    }
    catch(ValorMuitoAcimaException e) 
    {
        cerr << e.what() << '\n';
    }
    catch(...) 
    {
        cerr << "Nao encontrado" << '\n';
    }

    try
    {
        test->validaNumero(4000);
    }
    catch(ValorAbaixoException e) 
    {
        cerr << e.what() << '\n';
    }
    catch(ValorAcimaException e) 
    {
        cerr << e.what() << '\n';
    }
    catch(ValorMuitoAcimaException e) 
    {
        cerr << e.what() << '\n';
    }
    catch(...) 
    {
        cerr << "Nao encontrado" << '\n';
    }
    
    return 0;
}