//
// Created by brandon on 29/5/20.
//

#ifndef PATRONFACADE_FACADE_H
#define PATRONFACADE_FACADE_H
#include "codigo1.h"
#include "codigo2.h"

using namespace std;

class facade{
protected:
    codigo1 *codigo1Ptr;
    codigo2 *codigo2Ptr;

public:

    facade(codigo1 *codigo1Ptr_= nullptr,
           codigo2 *codigo2Ptr_= nullptr){
        this->codigo1Ptr = codigo1Ptr_ ?: new codigo1;
        this->codigo2Ptr = codigo2Ptr_ ?: new codigo2;
    }
    ~facade(){
        delete codigo2Ptr;
        delete codigo1Ptr;
    }
    string Operar(){
        string resultado = "Facade inicializando codigos \n";
        resultado += this->codigo1Ptr->operacion1();
        resultado += this->codigo2Ptr->operacion1code2();
        resultado += "Facade ordenando a codigos ejecutar sus operaciones \n";
        resultado += this->codigo1Ptr->operacion2();
        resultado += this->codigo2Ptr->operacion2code2();
        return resultado;
    }

};
#endif //PATRONFACADE_FACADE_H
