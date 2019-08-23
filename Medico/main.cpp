#include <iostream>
#include "Medico.h"
#include "Cirurgiao.h"
#include "Otorrino.h"
#include "Oftalmologista.h"
#include "Ginecologista.h"

int main(void){

    Medico *m1 = new Cirurgiao("Thiago", 60, 170);
    Medico *m2 = new Otorrino("Victor", 75, 185);
    Medico *m3 = new Ginecologista("Dionizio", 64, 176);
    Medico *m4 = new Oftalmologista("Ruan", 70, 180);

    std::cout<<m1->getEspecializacao()<<" "<<m1->getNome()<<std::endl;
    m1->RealizarOperacao();
    std::cout<<"\n\n";

    std::cout<<m2->getEspecializacao()<<" "<<m2->getNome()<<std::endl;
    m2->RealizarOperacao();
    std::cout<<"\n\n";

    std::cout<<m3->getEspecializacao()<<" "<<m3->getNome()<<std::endl;
    m3->RealizarOperacao();
    std::cout<<"\n\n";

    std::cout<<m4->getEspecializacao()<<" "<<m4->getNome()<<std::endl;
    m4->RealizarOperacao();
    std::cout<<"\n\n";


    return 0;
}