#include <iostream>
#include <string>
#include "Ginecologista.h"
#include "Medico.h"

Ginecologista::Ginecologista(std::string nome, double peso, double altura){   
    setNome(nome);
    setPeso(peso);
    setAltura(altura);
    especialidade = "Ginecologista";
}

void Ginecologista::RealizarOperacao()
{
    std::cout<<"Realizando exame Ginecologico.";
}

std::string Ginecologista::getEspecializacao()
{
    return especialidade;
}

std::string Ginecologista::getNome()
{
    return nome;
}

double Ginecologista::getAltura()
{
    return altura;
}

double Ginecologista::getPeso()
{
    return peso;
}

void Ginecologista::setNome(std::string nome)
{
    this->nome = nome;
}

void Ginecologista::setAltura(double altura)
{
    this->altura = altura;
}

void Ginecologista::setPeso(double peso)
{
    this->peso = peso;
}