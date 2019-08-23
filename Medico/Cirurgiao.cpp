#include <iostream>
#include <string>
#include "Cirurgiao.h"
#include "Medico.h"

Cirurgiao::Cirurgiao(std::string nome, double peso, double altura){   
    setNome(nome);
    setPeso(peso);
    setAltura(altura);
    especialidade = "Cirurgiao";
}

void Cirurgiao::RealizarOperacao()
{
    std::cout<<"Realizando Cirurgia.";
}

std::string Cirurgiao::getEspecializacao()
{
    return especialidade;
}

std::string Cirurgiao::getNome()
{
    return nome;
}

double Cirurgiao::getAltura()
{
    return altura;
}

double Cirurgiao::getPeso()
{
    return peso;
}

void Cirurgiao::setNome(std::string nome)
{
    this->nome = nome;
}

void Cirurgiao::setAltura(double altura)
{
    this->altura = altura;
}

void Cirurgiao::setPeso(double peso)
{
    this->peso = peso;
}