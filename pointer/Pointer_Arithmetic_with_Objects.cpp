/*Suppose you have a class Employee with the following structure:

Private members: id (int), salary (float).
Public methods: A parameterized constructor to initialize the members and a
 method showDetails() to display them.*/
 #include <iostream>
 #include <string>
 using namespace std;

 class Employee{
int id;
float salary;
public:
Employee(int a,float b){
    id=a;
    salary=b;
}
void showDetails(){
    cout<<"ID: "<<id<<endl;
    cout<<"Salary: "<<salary<<endl;
}
 };

 int main(){
    Employee *ptr= new Employee(23303106,1233.45);
    ptr->showDetails();
 }