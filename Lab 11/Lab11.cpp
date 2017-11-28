#include "MyString.h"
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	MyString s;
	cout << "Enter a string: ";
	cin >> s;
	s.operator[](0) = 'B';
	cout << s << endl;
}