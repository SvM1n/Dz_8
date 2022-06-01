#include "Dom8.h"
Student::Student() {
	strcpy_s(name, "");
	strcpy_s(surname, "");
	strcpy_s(group, "");
}

Student::Student(char n[], char s[], char g[]) {
	strcpy_s(name, n);
	strcpy_s(surname, s);
	strcpy_s(group, g);
}

std::ostream& operator <<(std::ostream& os, const Student& st1){
	os << st1.name<<" " << st1.surname<<" " << st1.group;
	return os;
}

std::istream& operator >> (std::istream& is, const Student& st1){
	is >> st1.name >> st1.surname >> st1.group;
	return is;
}

Student Student:: operator= (Student st1) {
	strcpy_s(name, st1.name);
	strcpy_s(surname, st1.surname);
	strcpy_s(group, st1.group);
	return *this;
}
