/*Use a pointer to iterate over the array and print its values.*/
#include <iostream>
using namespace std;
int main(){
    int *arr[5];
    for (int i=0;i<5;i++){
        arr[i]=new int ;
        cin>>*arr[i];
    }
    for (int i=0;i<5;i++){
        cout<<*arr[i]<<" ";
    }
}