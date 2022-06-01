#ifndef DOM8_H
#define DOM8_H
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
class Student {

	private:
		enum { sz = 30 };
		 char name[sz];
		mutable char surname[sz];
		mutable char group[sz];
	public:
		Student();
		Student(char n[], char s[], char g[]);
		friend std::ostream& operator << (std::ostream& os, const Student& st1);
		friend std::istream& operator >> (std::istream& is, const Student& st1);
		Student operator = (Student st1);
};

#endif