#include "poligono.h"
#include "point.h"
#include <iostream>

using namespace std;

Poligono::Poligono(Point v1[])
{
    cout << "Construtor\n";
    for (int i = 0; i < v.getV(); i++)
    {
        v[i].setXY(0,0);
    }
}

Poligono::~Poligono()
{
    cout << "Destrutor\n";
}

int Poligono::setV(Point v1[])
{
    int n = 0, op = 0;
    float xi = 0, yi = 0;

    cout << "**************************************************\n";
    cout << "* Insira as coordenadas no sentido anti-horario. *\n";
    cout << "**************************************************\n\n";

    while (op != 1)
    {
        cout << "Insira as o numero de coordenadas do poligono: ";
        cin >> n;

        //Numero de coordenadas de um poligno: min = 2 e max = 100.
        if(n > 2 || n <= 100)
        {
            //Insere os pontos x e y para cada coordenada do poligono.
            for(int i=0; i<n; i++)
            {
                cout << "x" << i << ": ";
                cin >> xi;

                cout << "y" << i << ": ";
                cin >> yi;

                v[i].setXY(xi, yi);
            }
            op = 1;
        }

        //Repete a operacao em caso de invalidez.
        else
            {
                cout << "Numero de coordenadas invalido, tente novamente.\n";
                op = 0;
            }
    }
    return n;
}

int Poligono::getV()
{
    int nVertice = sizeof(v)/sizeof(Poligono);
    return (nVertice);
}

float Poligono::area(Point v1[])
{
    float s_x = 0, s_y = 0;

    //Soma o produto de cada elemento de x(ou y) com o seguinte de y(ou x),
    //a partir do primeiro(v[0]) ateh o penultimo.
    for(int i = 0; i < v.getV() - 1; i++)
    {
        s_x = s_x + v[i].getX()*v[i+1].getY();
    }

    for(int i = 0; i < v.getV() - 1; i++)
    {
        s_y = s_y + v[i].getY()*v[i+1].getX();
    }

    //Soma o produto do ultimo elemento de x(ou y) com o primeio de y(ou x)
    s_x = s_x + v[v.getV()].getX()*v[0].getY();
    s_y = s_y + v[v.getV()].getY()*v[0].getX();

    //Retorna o valor da area do poligono.
    return ((s_x - s_y)/2);
}

void Poligono::move(float a, float b)
{
    for (int i = 0; i < v.getV(); i++)
    {
        v[i].translata(a, b);
    }
}

void Poligono::rotaciona(Point p1, float nGrau)
{

}

void Poligono::imprime()
{
    for (int i = 0; i < v.getV(); i++)
    {
        cout << "(" << v[i].getX() << ", " << v[i].getY() << ")-->";
    }
    cout << endl;
}
