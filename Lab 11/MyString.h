#include <iostream>
#include <cstdio>
using namespace std;

#ifndef MYSTRING_H
#define MYSTRING_H

class MyString {
public:
	char str[100];
	char& operator[](int i);
};
ostream& operator<<(ostream&, const MyString&);
istream& operator >> (istream&, MyString&);
#endif
