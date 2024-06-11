#include<iostream>
#include <cstdlib> 
using namespace std;
int main(){
    int n;
    cout<<"Enter the maximum range of the number : ";
    cin>>n;
    const int number=rand()%n+1;
    cout<<"Your game starts now : \n";
    cout<<"Enter Number : ";
    int guess;
    do
    {
        cin>>guess;
        if(guess<number)
            cout<<"Too low, Try again : ";
        else if(guess>number)
            cout<<"Too high, Try again : ";
    } while (guess!=number);
    cout<<"Correct!";
    return 0;
}
