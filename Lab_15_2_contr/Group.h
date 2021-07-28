#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include <list>
#include <set>
#include <algorithm>
#include "Student.h"
#include <map>

using namespace std;


class Group
{
private:
	string name;
	//	list<Student*> masSt;	
	//	list<Student*>::iterator iter; 

	//	multiset<Student*, compareStudent> masSt;			
	//	multiset<Student*, compareStudent>::iterator iter; 

	map < string, Student* > masSt;
	map < string, Student* > ::iterator iter;


public:
	Group(string);
	Group();
	~Group();
	void setName(string);
	string getName();
	int  getSize();
	void addStudent(Student*);
	void GroupOut();
	void GroupSort();
	void delStudent(string, string);
	Student* findStudent(string, string);

	friend bool operator< (Student&, Student&);
	friend bool operator> (Student&, Student&);
	friend bool operator== (Student&, Student&);
	friend bool operator!= (Student&, Student&);

};