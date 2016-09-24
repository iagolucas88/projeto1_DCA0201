#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

class Poligono : public Point
{
private:
    Point v[100];

public:
    Poligono(Point v1[]);
    ~Poligono();

    //Insere os vertices do poligono.
    int setV(Point v1[]);

    //Recupera a quantidade de vertices do poligono.
    int getV(void);

    //Calcula a area do poligono.
    float area(Point v1[]);

    //Translata o poligono.
    void move(float a, float b);

    //Rotaciona o poligono de z graus no sentido anti-horario em torno de um ponto.
    void rotaciona(Point p1, float nGrau);

    //Imprime o poligono.
    void imprime(void);

};

#endif // POLIGONO_H
