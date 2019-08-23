#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"

void SistemaGerenciaFolha::setFuncionarios(Funcionario *f)
{
    funcionarios[i] = f;
    i++;
}
 
double SistemaGerenciaFolha::CalculaValorTotalFolha()
{
    double valorTotal = 0;

    for(int i=0 ; i<MAX_VETOR ; i++){
        valorTotal += funcionarios[i]->CalcularSalario();
    }

    return valorTotal;
}
    
double SistemaGerenciaFolha::ConsultaSalarioFuncionario(int id)
{
    for(int i=0 ; i<MAX_VETOR ; i++)
    {
        if(id == funcionarios[i]->getMatricula())
        {
            return funcionarios[i]->CalcularSalario();
        }
    }

    std::cout<<"funcionario nao encontrado."<<std::endl;
    return 0;
}