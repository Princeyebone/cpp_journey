#include <iostream>
using namespace std;
 

class student
{
protected:
	int admission_no;
	string name;
	int age;
	string address;

public:
	void getstudent(int ad_no, string id, int year, string loca )
	{
		admission_no = ad_no;
		name = id;
		age = year;
		address = loca;
	}
	


};

class undergraduate: public student
{
private:
	string degree_program;
public:
	void setdegree_program(string dp)
	{
		degree_program = dp;
	}

	string getdegree_member()
	{
		return degree_program;
	}
	
	void show()
	{
		cout << "** Undergraduate Student **" << endl
			 << "Admission No:" << admission_no << endl
			 << "Student name :"<< name << endl
			 << "Age :"<< age << endl
			 << "Degree Program : "<<degree_program << endl;
	}
};

class graduate : public student
{
private:
	string degree_program;
public:
	void setdegree_program(string dm)
	{
		degree_program = dm;
	}

	
	string getdegree_program()
	{
		return degree_program;
	}
	void show()
	{
		cout << "** Graduate Student **" << endl
			<< "Admission No:" << admission_no << endl
			<< "Student name :" << name << endl
			<< "Age :" << age << endl
			<< "Degree Program : " << degree_program << endl;
	}
	

};




int main()
{
	graduate aaa;
	undergraduate bbb;

	aaa.setdegree_program("Computer Science");
	aaa.getstudent(1, "aaa", 22, "36fj");
	aaa.show();


	cout << "  " << endl;
	bbb.setdegree_program("Mannagement Science");
	bbb.getstudent(2, "bbb", 23, "47hj");
	bbb.show();
};

