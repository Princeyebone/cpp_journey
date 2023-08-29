#include <iostream>
#include "assignment1.h"
using namespace std;

class Account
{
	int Account_no;
	double Balance;

public:
	Account(int account_no, double balance)
	{
		Account_no = account_no;
		Balance = balance;
	}


	void setAccount_no(int account_no) 
	      { Account_no = account_no; }
	int getAccount_no()
	    { return Account_no; }


	void setBalance(double balance) 
	         { Balance = balance; }
	double getBalance() 
	    { return Balance; }

	
    void display()
	{
		cout << "Account Number :" << Account_no << endl;
		cout << "Account Balance :" << Balance << endl;
	}

    
	void withdraw(double amount, double new_balance=0)
	{
		if (Balance >= amount) 
		{
			 new_balance=(Balance -= amount);
			 cout << "Successful withdrawl of " << amount << endl
				  << "Current balance: " << new_balance << endl; 
		}
		else
		{
			 new_balance = Balance;
			 cout << "Not enough funds" << endl;
		}
		
	}


	void deposit(double amount, double new_balance=0 )
	{
		new_balance = (Balance += amount);
		cout << "Successful deposite of : " << amount << endl
			 << "current balance :" << new_balance << endl;
	}
};



int main()
{
	Account Acc_num1 = Account(1234, 300);
	Acc_num1.display();
	Acc_num1.deposit(100);
	Acc_num1.withdraw(500);
	Acc_num1.display();

	Account Acc_num2 = Account(5678, 500);
    Acc_num2.display();
	Acc_num2.withdraw(68);
	Acc_num2.deposit(500);
	Acc_num2.display();
}