#ifndef POINT_H
#define POINT_H

class Point
{
private:
    float x, y;

public:
    Point(float px=0, float py=0);
    ~Point();

    void setX(float px);
    void setY(float py);
    void setXY(float px, float py);

    float getX(void);
    float getY(void);

    Point add(Point p1);
    Point sub(Point p1);

    float norma(void);

    void translata(float a, float b);

    void imprime(void);
};

#endif // POINT_H
