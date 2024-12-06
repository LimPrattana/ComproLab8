/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int age,height;
    long int bounty;
    string character;
    cout<<"Enter your age: ";
    cin >>age;
    if(age<=25){
        cout<<"Enter your height: ";
        cin>>height;
        if(height<100){
            character ="Chopper";
            cout<<"Your character = "<<character;
        }
        else if(height<180){
            character ="Usopp";
            cout<<"Your character = "<<character;
        }
        else{
            cout<<"Enter your bounty: ";
            cin>>bounty;
            if(bounty>1100000000){
                character ="Zoro";
                cout<<"Your character = "<<character;
            }
            else{
                character ="Sanji";
                cout<<"Your character = "<<character;
            }
        }
    }
    else if (age<=60)
    {
        cout<<"Enter your bounty: ";
        cin>>bounty;
        if(bounty>500000000){
            character ="Jinbe";
            cout<<"Your character = "<<character;
        }
        else{
             character ="Franky";
            cout<<"Your character = "<<character;
        }
    }
    else{
        character ="Brook";
        cout<<"Your character = "<<character;
    }
    
}