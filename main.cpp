//Jennifer Aber
//EECS 348 
//EC Lab # 3
//November 26, 2023

#include "Account.h"
#include "SavingsAccount.h"
#include "CurrentAccount.h"
#include <iostream>

using namespace std;



int main()
{

	SavingsAccount savings("S123", "John Doe", 1000, 0.02);
	CurrentAccount current("C456", "Jane Doe", 2000, 500);
	savings.displayDetails();
	current.displayDetails();
	savings.deposit(500);
	cout << savings;
	current.withdraw(1000);
	cout << current;

	current = current + savings;
	cout << current;
	cout << savings;

	return 0;
}
