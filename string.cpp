#include<iostream>
#include<string>
using namespace std;

int main()
{
	string fname, lname, address;

	cout << endl << "Enter address ";
	getline(cin, address);
	
	cout << endl<< "Enter First name ";
	cin >> fname;

	cout << endl << "Enter Last name ";
	cin >> lname;

	string fullname = fname + " " + lname;

	cout << endl << "Your Details :" << endl << fullname << endl << address;

	return 0;
}