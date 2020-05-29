#include <iostream>
#include "facade.h"
#include "codigo1.h"
#include "codigo2.h"

using namespace std;


void Client(facade *facade){
    cout << facade->Operar();
}

int main(){
    codigo1 *codigo1instanciacion = new codigo1;
    codigo2 *codigo2instanciacion = new codigo2;
    facade *facadeInstance = new facade(codigo1instanciacion,codigo2instanciacion);
    Client(facadeInstance);
    delete facadeInstance;
    return 0;
}