#include<iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    if(marks<25) {
        cout << "Your grade is F";
    }
    else if(marks<=44){
        cout << "Your grade is E";

    }
    else if(marks<=49){
        cout << "Your grade is D";

    }
    else if(marks<=59){
        cout << "Your grade is C";

    }
    else if(marks<=79){
        cout << "Your grade is B";

    }
    else if(marks<=100){
        cout << "Your grade is A";
    }
    return 0;
}