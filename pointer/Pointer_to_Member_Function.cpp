/*Explain the concept of a pointer to a member function in C++.

Write a program to demonstrate this concept with a class Calculator that contains:

A member function add(int, int) to return the sum of two integers.
A pointer to this member function.
Use the pointer to call the add() function.
*/
#include <iostream>
using namespace std;
class Calculator{
public:
 int  add(int a,int b){
    return a+b;
 }
};
int main(){
  // Pointer to the member function 'add' of Calculator class
    int (Calculator::*ptr)(int, int) = &Calculator::add;

    // Create an object of the Calculator class
    Calculator calc;

    // Call the 'add' function using the pointer to member function
    cout << "Sum: " << (calc.*ptr)(5, 5) << endl;  // Using pointer to member function

}