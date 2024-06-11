#include<iostream>
#include<string.h>
using namespace std;
int main(){
    cout<<"! Welcome to Calculaotor !"<<endl;
    cout<<"Enter first number : ";
    int num1;
    cin>>num1;
    cout<<"Enter second number : ";
    int num2;
    cin>>num2;
    cout<<"Sum : 1"<<endl;
    cout<<"Difference : 2"<<endl;
    cout<<"Product : 3"<<endl;
    cout<<"Quotient : 4"<<endl;
    cout<<"Remainder : 5"<<endl;
    cout<<"Power : 6"<<endl;
    cout<<"Enter operator : ";
    int op;
    cin>>op;
    switch(op){
        case 1:
            cout<<"Sum : "<<num1+num2<<endl;
            break;
        case 2:
            cout<<"Difference : "<<num1-num2<<endl;
            break;
        case 3:
            cout<<"Product : "<<num1*num2<<endl;
            break;
        case 4:
            cout<<"Quotient : "<<num1/num2<<endl;
            break;
        case 5:
            cout<<"Remainder : "<<num1%num2<<endl;
            break;
        case 6:
            cout<<"Power : "<<num1*num1<<endl;
            break;
    }
    return 0;
    

}