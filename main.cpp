#include <iostream>
#include "point.h"

using namespace std;

int main(void)
{
    Point p1, p2, p3;

    p1.setX(3.2); p1.setY(5.4);

    p1.imprime();

    p2.setXY(0.8, 0.6);

    p2.imprime();

    p3 = p1.add(p2);

    p3.imprime();

    p3 = p1.sub(p2);

    p3.imprime();

    cout << "Norma = " << p3.norma() << endl;

    p3.translata(0.8, 0.6);

    p3.imprime();

    return 0;
}

