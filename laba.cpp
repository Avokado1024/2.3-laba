#include <iostream>
#include <cmath>
using namespace std;

class Circle {
protected:
    double radius;

public:
    Circle(double radius)
    {
        this->radius = radius;
    }

    double calculateArea()
    {
        double d = 3.14 * pow(radius, 2);
        return d;
    }

    virtual void print()
    {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

class Sphere : public Circle
{
public:
    Sphere(double radius) : Circle(radius) {}

    double calculateVolume() {
        double z = 4.0 / 3.0;
        return radius * Circle::calculateArea() * (z);
    }

    virtual void print() {
        cout << "Volume: " << calculateVolume() << endl;
    }
};

int main() {
    Circle circle(5);
    Sphere sphere(5);
    circle.print();
    sphere.print();
    Circle* circlePtr = new Circle(3);
    circlePtr->print();
    Sphere* spherePtr = new Sphere(3);
    spherePtr->print();

    return 0;
}
