#include <iostream>
#include <cmath>
using namespace std;

class Circle {
protected:
    double r;

public:
    Circle(double r)
    {
        this->r = r;
    }

    double Area()
    {
        double d = 3.14 * pow(r, 2);
        return d;
    }

    virtual void print()
    {
        cout << "Radius: " << r << endl;
        cout << "Area: " << Area() << endl;
    }
};

class Sphere : public Circle
{
public:
    Sphere(double r) : Circle(r) {}

    double Volume() {
        double z = 4.0 / 3.0;
        return r * Circle::Area() * (z);
    }

    virtual void print() {
        cout << "Volume: " << Volume() << endl;
    }
};

int main() {
    Circle circle(5);
    Sphere sphere(5);
    circle.print();
    sphere.print();
    Circle* circlePtr = new Circle(10);
    circlePtr->print();
    Sphere* spherePtr = new Sphere(10);
    spherePtr->print();

    return 0;
}
