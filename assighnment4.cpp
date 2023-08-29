#include <iostream>
using namespace std;


class student 
{
	protected:
	int roll_no;
public:
	void getroll_no(int rn)
	{
		 roll_no = rn;

		 
	}

    void display()
	{
		cout <<"Your roll number is : " << roll_no << endl;
	}
};

class test : public student
{protected:
	int test1_score;
	int test2_score;
public:
      void gettest(int t1, int t2)
	{
		test1_score = t1;
		test2_score = t2;
	}
};

class sport : public student
{protected:
	int sports_score;

public:
	void getsport(int  spc)
	{
		sports_score = spc;
	}
};

class result :public  sport, public test
{public:
	void display()
	{
		int total = (test1_score + test2_score + sports_score);
		cout << "Sport score : " << sports_score << endl;
		cout << "Test 1 : " << test1_score << endl;
		cout << "Test 2 : " << test2_score << endl;
		cout <<"Your Total score is :  "<<total << endl;
	}
};

int main()
{
	student ama;
	result jake;

	ama.getroll_no(34);
	ama.display();

	jake.getsport(54);
	jake.gettest(45, 56);
	jake.display();


};