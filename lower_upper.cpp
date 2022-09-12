#include<iostream>
using namespace std;

int main(){

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if(ch>='A' && ch<='Z'){
        cout << "Character is UpperCase";
    }
    else if(ch>='a' && ch<='z'){
        cout << "Character is lowercase";
    }
    else{
        cout << "You entered wrong character";
    }

}