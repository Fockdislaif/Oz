#ifndef OPERACIONES_H
#define OPERACIONES_H

//Importar las librerias necesarias

#include <iostream>
#include <map>

using namespace std;

class Operaciones{
    public:
        //Metodos
        map<string, string> parse(string s);
        bool isInt(string s);
        string evalType(string s);
};

#endif
