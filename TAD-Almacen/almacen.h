#include "../TAD-ValorOz/valorOz.h"
#include "../TAD-ValorOz/valorOzFloat.h"
#include "../TAD-ValorOz/valorOzInt.h"
#include "../TAD-ValorOz/valorOzRec.h"
#include "../TAD-ValorOz/valorOzUnlinked.h"
#include "../TAD-ValorOz/valorOzVar.h"
#include "../Operacion/operacion.h"
#include <iostream>
#include <string>
#include <map>
#include <list>
#include <algorithm>

#ifndef ALMACEN_H
#define ALMACEN_H

using namespace std;

class Almacen{
    private:
        map<string, ValorOz*> almacen;
        bool fail;
        bool twoLevelLink;
    public:
        Almacen();
        Almacen( map<string, ValorOz*> _almacen );
        map<string, ValorOz*> getAlmacen();
        void showInfo();
        void addVal( string c1, string c2 );
        string infoVal( ValorOz* valOz );
        string infoVar( string name );
        bool isLinked( string name );
        string findFather( ValorOz* son );
        bool existVar( string name );
        void keepTwoLevel();
        bool getFail();
        bool getTwoLevelLink();
        void swapFail();
        void swapTwoLevelLink();
        list<string> getListVar();
        void showVarList();
        bool linkRec( ValorOz* v1, ValorOz* v2 );
};

#endif
