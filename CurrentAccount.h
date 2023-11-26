//Jennifer Aber
//EECS 348 
//EC Lab # 3
//November 26, 2023

#include "Account.h"
#include <iostream>
#include <iomanip>
using namespace std;


class CurrentAccount : public Account
{
public:
	double overdraftlimit;
	//constructor
	CurrentAccount(string ID, string name, double my_balance, double my_overdraftlimit) {
		accountNumber = ID;
		accountHolder = name;
		balance = my_balance;
		overdraftlimit = my_overdraftlimit;

	}
	//destructor
	~CurrentAccount() {}

	void displayDetails()
	{
		cout << endl;
		cout << "Account Details for for Current Account (ID: " << accountNumber << "):";
		cout << endl;
		cout << fixed << setprecision(2) << endl;
		cout << "   Holder: " << accountHolder << endl;
		cout << "   Balance: $" << balance << endl;
		cout << "   Overdraft Limit: $" << overdraftlimit;
		cout << endl;
	}

	//operator overload. 
	friend std::ostream& operator<<(ostream& os, const CurrentAccount& CA)
	{
		os << fixed << setprecision(2) << endl; //two decimal points
		os << "Account Details for for Current Account (ID: " << CA.accountNumber << "):";
		os << endl;
		os << "   Holder: " << CA.accountHolder << endl;
		os << "   Balance: $" << CA.balance << endl;
		os << "   Overdraft Limit: $" << CA.overdraftlimit;
		os << endl;

		return os;
	}

	

	void withdraw(double amount)
	{
		if (balance - amount >= 0 - overdraftlimit)
		{
			balance = balance - amount;
			
		}
		else
		{
			cout << endl;
			cout << "You have exceeded your overdraft limit.";
			cout << endl;
		}
	}

	//overload to transfer $300 from savings
	CurrentAccount operator+ (SavingsAccount& SA)
	{

		if (SA.balance > 800)
		{
			balance = balance + 300;
			SA.balance = SA.balance - 300;
		}
		else
		{
			cout << "Insufficient Funds.";
			cout << endl;
		}

		return *this;
	}


};

