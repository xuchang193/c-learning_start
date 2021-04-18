#include<iostream>
using namespace std;
void Getsquare(int &number);
int main(){
    int number=0;
    cout<<"Enter a number you wish to square: ";
    cin>>number;

    Getsquare(number);
    cout<<"Square is: "<<number<<endl;
    return 0;
}
void Getsquare(int &number){
    number*=number;
}