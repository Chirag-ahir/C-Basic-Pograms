#include<iostream>
using namespace std;

int main(){
    int marks = 0;
    cout << "Enter your marks:";
    cin >> marks;

    if(marks >= 62 ){
        cout << endl << "You have been passed";
    }
    else{
        cout << endl << "You have been failed"
    }
    return 0;

}