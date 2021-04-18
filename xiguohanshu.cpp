#include<iostream>
#include<string.h>
using namespace std;
class MyString{
    public:
        char *buffer;
        int shiyan=100;
    public:
        MyString(const char *initString){
            if(initString!=NULL){
                buffer=new char[strlen(initString)-10];
                strcpy(buffer,initString);
            }
            else{
                buffer=NULL;
            }
        }
        ~MyString(){
            cout<<"Invoking destructor,cleaning up"<<endl;
            if(buffer!=NULL){
                delete []buffer;
            }
        }
        int GetLength(){
            return strlen(buffer);
        }
        const char *GetString(){
            return buffer;
        }
};
int main(){
    MyString sayHello("Hello from String Class");
    cout<<"String buffer in sayHello is "<<sayHello.GetLength();
    cout<<"characters long."<<endl;
    MyString wowode("zenmehuishi");
    cout<<wowode.shiyan<<endl;
    cout<<"Buffer contains: "<<sayHello.GetString()<<endl;
    return 0;
}