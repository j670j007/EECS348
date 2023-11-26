//Jennifer Aber
//EECS 348 
//EC Lab # 3
//November 26, 2023

#include "Account.h"
#include <iostream>
#include <iomanip>
using namespace std;


class SavingsAccount : public Account
{
public:
	double interestRate;
	SavingsAccount(string ID, string name, double my_balance, double interest) {
		interestRate = interest;
		accountNumber = ID;
		accountHolder = name;
		balance = my_balance;

	}

	~SavingsAccount() {}

	//overload <<
	friend std::ostream& operator<<(ostream& os, const SavingsAccount& SA)
	{
		os << fixed << setprecision(2) << endl;
		os << "Account Details for for Savings Account (ID: " << SA.accountNumber << "):";
		os << endl;
		os << "   Holder: " << SA.accountHolder << endl;
		os << "   Balance: $" << SA.balance << endl;
		os << "   Interest Rate: " << SA.interestRate * 100.00 << "%";
		os << endl;

		return os;
	}

	void displayDetails()
	{
		cout << endl;
		cout << "Account Details for for Savings Account (ID: " << accountNumber << "):";
		cout << "   Holder: " << accountHolder << endl;
		cout << fixed << setprecision(2) << endl;
		cout << "   Balance: $" << balance << endl;
		cout << "   Interest Rate: " << interestRate * 100 << "%";
		cout << endl;
	}

	//used a minimum balance of $500 since none was specified
	void withdraw(double amount)
	{
		if (balance - amount >= 500)
		{
			balance = balance - amount;
		}
		else
		{
			cout << endl;
			cout << "You must maintain a minimum balance of $500.";
			cout << endl;
		}
	}





};

