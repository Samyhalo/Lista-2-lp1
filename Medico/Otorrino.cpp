#include <iostream>
#include <string>
#include "Otorrino.h"
#include "Medico.h"

Otorrino::Otorrino(std::string nome, double peso, double altura){   
    setNome(nome);
    setPeso(peso);
    setAltura(altura);
    especialidade = "Otorrino";
}

void Otorrino::RealizarOperacao()
{
    std::cout<<"Realizando exame Otorrino.";
}

std::string Otorrino::getEspecializacao()
{
    return especialidade;
}

std::string Otorrino::getNome()
{
    return nome;
}

double Otorrino::getAltura()
{
    return altura;
}

double Otorrino::getPeso()
{
    return peso;
}

void Otorrino::setNome(std::string nome)
{
    this->nome = nome;
}

void Otorrino::setAltura(double altura)
{
    this->altura = altura;
}

void Otorrino::setPeso(double peso)
{
    this->peso = peso;
}