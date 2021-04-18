#include<iostream>
using namespace std;
int main(){
    int *pointT=new int;
    int *pointN=pointT;
    *pointN=30;
    cout<<*pointT<<endl;
    delete pointT;
    delete pointN;
    return 0;
}