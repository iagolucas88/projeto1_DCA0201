#include "retangulo.h"


Retangulo(int x, int y, int largura, int altura){
        v[0].setXY(x,y);
        v[1].setXY(x,y-altura);
        v[2].setXY(x+largura,y-altura);
        v[3].setXY(x+largura,y);
}
