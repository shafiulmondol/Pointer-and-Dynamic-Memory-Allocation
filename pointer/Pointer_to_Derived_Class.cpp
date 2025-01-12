/*Write a program to demonstrate the concept of a pointer to a derived class.
 Include the following:

A base class Shape with a pure virtual function draw().
Derived classes Circle and Rectangle that override the draw() function.
Use a base class pointer to call the draw() function of each derived class object.*/
#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};
class circle : public Shape
{
public:
    void draw()
    {
        cout << " Circle" << endl;
    }
};

class rectangle : public Shape
{
    void draw()
    {
        cout << " Rectangle" << endl;
    }
};

int main()
{
    circle c;
    rectangle re;
    Shape *ptr;
    ptr = &re;
    ptr->draw();
    ptr = &c;
    ptr->draw();
}