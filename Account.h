//Jennifer Aber
//EECS 348 
//EC Lab # 3
//November 26, 2023

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Account
{
public:

	string accountNumber;
	string accountHolder;
	double balance = 0.00;


	void displayDetails()		//Display account details.
	{
		cout << "Account Details for for Savings Account (ID: " << accountNumber << "):";
		cout << endl;
		cout << fixed << setprecision(2) << endl;
		cout << "   Holder: " << accountHolder << endl;
		cout << "   Balance: $" << balance << endl;

	}
	void deposit(double amount) //Deposit money into the account.
	{
		balance = balance + amount;
	}

	void withdraw(double amount) //withdraw money from the account
	{
		if (balance - amount >= 0)
		{
			balance = balance - amount;
		}
		else
		{
			cout << "Insufficient funds.";
		}

	} 








};

#endif;


