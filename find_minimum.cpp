#include<iostream>
using namespace std;

int main(){

    int arr[5] = {0};

    for(int i=0; i<=4; i++){
        cout << "Enter a number: ";
        cin >> arr[i];
    }

    int min = arr[0];
    for(int i=1; i<5; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << endl << "Min value is : " << min;
}