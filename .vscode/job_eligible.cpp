#include<iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    if( age<18 ){
        cout << "You are not eligible for job!";
    }
    else if(age<=56){
        cout << "You are eligible for job!";
        if( age>=55){
            cout << "But, Retiring soon!";
        }
    }
    else{
        cout << "Retirement time!";
        }
    return 0;
}