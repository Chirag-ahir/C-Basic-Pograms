#include<iostream>
using namespace std;

int main(){

    int marks = 0;
    cout << "Enter your marks:";
    cin >> marks;

    if(marks >= 60 && marks <= 100){
        cout << "You are first class";
    }
    else if(marks >= 40 && marks <= 60){
        cout << "You are second class";
    }
    else{
        cout << "You are wrong class";
    }
    return 0;
}