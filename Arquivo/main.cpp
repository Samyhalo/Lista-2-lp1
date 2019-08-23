#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(void)
{
    ifstream teste("teste.txt", ios::in);

    ofstream testecopia("teste_bkp.txt", ios::out);

    string texto;

    if(!teste.is_open())
    {
        cout<<"input file didnt open"<<endl;
    }

    if(!testecopia.is_open())
    {
        cout<<"output file didnt open"<<endl;
    }

    while(!teste.eof()){
        getline(teste/*cin*/, texto);
    }

    testecopia/*cout*/ << texto;

    teste.close();
    testecopia.close();
 
    return 0;
}