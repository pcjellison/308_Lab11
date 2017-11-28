#include "MyString.h"
#include <iostream>
#include <cstdio>
using namespace std;

char&  MyString::operator[] (int i)
{
	if (i == 0) return str[0];
}

ostream& operator<<(ostream& out, const MyString& st)
{
	out << st.str;
	return out;
}

istream& operator >> (istream& in, MyString& st)
{
	in >> st.str;
	return in;
}