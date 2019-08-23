#include <iostream>
#include <string>
#include "Oftalmologista.h"
#include "Medico.h"

Oftalmologista::Oftalmologista(std::string nome, double peso, double altura){   
    setNome(nome);
    setPeso(peso);
    setAltura(altura);
    especialidade = "Oftalmologista";
}

void Oftalmologista::RealizarOperacao()
{
    std::cout<<"Realizando exame de Vista.";
}

std::string Oftalmologista::getEspecializacao()
{
    return especialidade;
}

std::string Oftalmologista::getNome()
{
    return nome;
}

double Oftalmologista::getAltura()
{
    return altura;
}

double Oftalmologista::getPeso()
{
    return peso;
}

void Oftalmologista::setNome(std::string nome)
{
    this->nome = nome;
}

void Oftalmologista::setAltura(double altura)
{
    this->altura = altura;
}

void Oftalmologista::setPeso(double peso)
{
    this->peso = peso;
}