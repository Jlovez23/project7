#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>
#include "address.h"
#include "date.h"

class Student{
	private:
		std::string Fname;
		std::string Lname;
		int CreditHours;
		date* DOB;
		date* GradeDate;
		Address* Address;
	public:
		Student();
		~Student();
		void init(std::string Studentstr);
		void printStudent();
		string getLname();
		string getFname();
		int getCredit();
}; //end Student class


#endif
