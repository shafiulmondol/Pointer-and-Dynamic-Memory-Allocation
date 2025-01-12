/*Explain the concept of a pointer to an object in C++ and its significance in
 OOP.

Write a C++ program where a pointer is used to access and manipulate the members
 of a class Car. The class should include:

Private members: brand (string), price (float).
Public methods: setDetails() to set the values of brand and price, and
showDetails() to display them.*/
#include <iostream>
#include <string>
using namespace std;

class car
{
    string brand;
    float price;

public:
    void setDetails(string a, float b)
    {
        brand = a;
        price = b;
    }
    void showDetails()
    {
        cout << "Brand: " << brand << "\nprice : " << price;
    }
};
int main()
{
    car *ptr;
    car obj;
    ptr = &obj;
    ptr->setDetails("Toyota", 100000);
    ptr->showDetails();
}