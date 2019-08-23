#include <iostream>
#include <string>
#include "Medico.h"

Medico::Medico(){}

void Medico::RealizarOperacao()
{
}

std::string Medico::getEspecializacao()
{
    return especialidade;
}

std::string Medico::getNome()
{
    return nome;
}

double Medico::getAltura()
{
    return altura;
}

double Medico::getPeso()
{
    return peso;
}

void Medico::setNome(std::string nome)
{
    this->nome = nome;
}

void Medico::setAltura(double altura)
{
    this->altura = altura;
}

void Medico::setPeso(double peso)
{
    this->peso = peso;
}