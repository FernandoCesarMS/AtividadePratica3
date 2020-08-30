#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H
#include <iostream>

using namespace std;

class Ponto2D
{
private:
    double x;        // Ponto X do plano cartesiano
    double y;        // Ponto Y do plano cartesiano
    int id;          // Id referente a cada ponto
    int getNextId(); // Incrementa um no ID

public:
    //constructors
    Ponto2D();
    Ponto2D(double, double);

    //basic getters and setters
    double getX();
    double getY();
    int getId();
    void setX(int);
    void setY(int);
    void setId(int);

    // other methods
    void print() const;
    void sumOf(Ponto2D) const; // n tenho certeza se tem que colocar o const
    Ponto2D sumOf(Ponto2D);
    double distToOrig();
    double distTo(Ponto2D);
};

#endif