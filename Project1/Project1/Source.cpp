#include <iostream>

using namespace std;

int getGrossIncome;
int GIncome;
int getTotalDeductions;
int StandDedAns;
int Single;
int MarriedFilingJ;
int HeadOfHouse;
int FilingAns;
int TDeduct;
double TaxBrack1;
double TaxBrack2;
double TaxBrack3;
double TaxBrack4;
double TaxBrack5;
double TaxBrack6;
double TaxBrack7;
double TotalTax;
double AGITax;
double GrossIncomeTax;


int main()
{
	
	int grossIncome = getGrossIncome;

	int totalDeductions = getTotalDeductions;

	int adjustedGrossIncome = grossIncome - totalDeductions;

	int Single = 12400;
	int MarriedFilingJ = 24800;
	int HeadOfHouse = 18650;

	int getGrossIncome = 0;
	 cout << "Enter your income or 0 to stop:\n";
	 cin >> GIncome;
	

	while (GIncome != 0)
	{
	    getGrossIncome += GIncome;
		cout << "Enter your income or 0 to stop:\n";
		cin >> GIncome;
		
	}
	cout << "Would you like to use Standard Deduction, if Yes Enter 1. If no enter 0 \n";
	cin >> StandDedAns;
	if (StandDedAns == 1)
	{
		int FilingAns = 0;
		cout << "Are you filing as:\n"
			<< "1. Single\n" << "2. Married Filing Jointly\n" << "3. Head Of Household\n";
		cin >> FilingAns;
		if (FilingAns == 1)
		{
			cout << "You are filing as Single:\n";
			getTotalDeductions + Single;

		}
		if (FilingAns == 2)
		{
			cout << "You are filing as Married Filing Jointly:\n";
			getTotalDeductions + MarriedFilingJ;
		}
		if (FilingAns == 3)
		{
			cout << "You are filing as Head of Household:\n";
			getTotalDeductions + HeadOfHouse;

		}
	}
	else
	{
		int getTotalDeductions = 0;
		cout << "Please enter Deductions or 0 to stop:\n";
		cin >> TDeduct;
			while (TDeduct != 0)
			{
				getTotalDeductions += TDeduct;
				cout << "Please enter Deductions or 0 to stop:\n";
				cin >> TDeduct;
				
			}
	}
	int FilingAns = 0;
	cout << "Are you filing as:\n"
		<< "1. Single\n" << "2. Married Filing Jointly\n" << "3. Head Of Household\n";
	cin >> FilingAns;
	if (FilingAns == 1)
	{
		cout << "You are filing as Single:\n";
		if (adjustedGrossIncome >= 518400)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10/100;
			TaxBrack2 = (adjustedGrossIncome - 9875) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 40125) * 22 / 100;
			TaxBrack4 = (adjustedGrossIncome - 85525) * 24 / 100;
			TaxBrack5 = (adjustedGrossIncome - 163300) * 32 / 100;
			TaxBrack6 = (adjustedGrossIncome - 207350) * 35 / 100;
			TaxBrack7 = (adjustedGrossIncome - 518400) * 37 / 100;
			
		}
		else if (adjustedGrossIncome >= 207350)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 9875) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 40125) * 22 / 100;
			TaxBrack4 = (adjustedGrossIncome - 85525) * 24 / 100;
			TaxBrack5 = (adjustedGrossIncome - 163300) * 32 / 100;
			TaxBrack6 = (adjustedGrossIncome - 207350) * 35 / 100;
			TaxBrack7 = 0;
		}
		else if (adjustedGrossIncome >= 163300)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 9875) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 40125) * 22 / 100;
			TaxBrack4 = (adjustedGrossIncome - 85525) * 24 / 100;
			TaxBrack5 = (adjustedGrossIncome - 163300) * 32 / 100;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}
		else if (adjustedGrossIncome >= 85525)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 9875) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 40125) * 22 / 100;
			TaxBrack4 = (adjustedGrossIncome - 85525) * 24 / 100;
			TaxBrack5 = 0;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}
		else if (adjustedGrossIncome >= 40125)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 9875) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 40125) * 22 / 100;
			TaxBrack4 = 0;
			TaxBrack5 = 0;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}
		else if (adjustedGrossIncome >= 9875)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 9875) * 12 / 100;
			TaxBrack3 = 0;
			TaxBrack4 = 0;
			TaxBrack5 = 0;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}
		else (adjustedGrossIncome >= 0);
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = 0;
			TaxBrack3 = 0;
			TaxBrack4 = 0;
			TaxBrack5 = 0;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}
	}
	if (FilingAns == 2)
	{
		cout << "You are filing as Married Filing Jointly:\n";
		if (adjustedGrossIncome >= 622050)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 19750) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 80250) * 22 / 100;
			TaxBrack4 = (adjustedGrossIncome - 171050) * 24 / 100;
			TaxBrack5 = (adjustedGrossIncome - 326600) * 32 / 100;
			TaxBrack6 = (adjustedGrossIncome - 414700) * 35 / 100;
			TaxBrack7 = (adjustedGrossIncome - 622050) * 37 / 100;

		}
		else if (adjustedGrossIncome >= 414700)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 19750) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 80250) * 22 / 100;
			TaxBrack4 = (adjustedGrossIncome - 171050) * 24 / 100;
			TaxBrack5 = (adjustedGrossIncome - 326600) * 32 / 100;
			TaxBrack6 = (adjustedGrossIncome - 414700) * 35 / 100;
			TaxBrack7 = 0;
		}
		else if (adjustedGrossIncome >= 326600)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 19750) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 80250) * 22 / 100;
			TaxBrack4 = (adjustedGrossIncome - 171050) * 24 / 100;
			TaxBrack5 = (adjustedGrossIncome - 326600) * 32 / 100;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}
		else if (adjustedGrossIncome >= 171050)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 19750) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 80250) * 22 / 100;
			TaxBrack4 = (adjustedGrossIncome - 171050) * 24 / 100;
			TaxBrack5 = 0;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}
		else if (adjustedGrossIncome >= 80250)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 19750) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 80250) * 22 / 100;
			TaxBrack4 = 0;
			TaxBrack5 = 0;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}
		else if (adjustedGrossIncome >= 19750)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 19750) * 12 / 100;
			TaxBrack3 = 0;
			TaxBrack4 = 0;
			TaxBrack5 = 0;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}
		else (adjustedGrossIncome >= 0);
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = 0;
			TaxBrack3 = 0;
			TaxBrack4 = 0;
			TaxBrack5 = 0;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}
	}
	if (FilingAns == 3)
	{
		cout << "You are filing as Head of Household:\n";
		if (adjustedGrossIncome >= 518400)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 14100) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 53700) * 22 / 100;
			TaxBrack4 = (adjustedGrossIncome - 85500) * 24 / 100;
			TaxBrack5 = (adjustedGrossIncome - 163300) * 32 / 100;
			TaxBrack6 = (adjustedGrossIncome - 207350) * 35 / 100;
			TaxBrack7 = (adjustedGrossIncome - 518400) * 37 / 100;

		}
		else if (adjustedGrossIncome >= 207350)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 14100) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 53700) * 22 / 100;
			TaxBrack4 = (adjustedGrossIncome - 85500) * 24 / 100;
			TaxBrack5 = (adjustedGrossIncome - 163300) * 32 / 100;
			TaxBrack6 = (adjustedGrossIncome - 207350) * 35 / 100;
			TaxBrack7 = 0;
		}
		else if (adjustedGrossIncome >= 163300)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 14100) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 53700) * 22 / 100;
			TaxBrack4 = (adjustedGrossIncome - 85500) * 24 / 100;
			TaxBrack5 = (adjustedGrossIncome - 163300) * 32 / 100;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}
		else if (adjustedGrossIncome >= 85500)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 14100) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 53700) * 22 / 100;
			TaxBrack4 = (adjustedGrossIncome - 85500) * 24 / 100;
			TaxBrack5 = 0;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}
		else if (adjustedGrossIncome >= 53700)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 14100) * 12 / 100;
			TaxBrack3 = (adjustedGrossIncome - 53700) * 22 / 100;
			TaxBrack4 = 0;
			TaxBrack5 = 0;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}
		else if (adjustedGrossIncome >= 14100)
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = (adjustedGrossIncome - 14100) * 12 / 100;
			TaxBrack3 = 0;
			TaxBrack4 = 0;
			TaxBrack5 = 0;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}
		else (adjustedGrossIncome >= 0);
		{
			TaxBrack1 = (adjustedGrossIncome - 0) * 10 / 100;
			TaxBrack2 = 0;
			TaxBrack3 = 0;
			TaxBrack4 = 0;
			TaxBrack5 = 0;
			TaxBrack6 = 0;
			TaxBrack7 = 0;
		}

	}
	TotalTax = (TaxBrack1 + TaxBrack2 + TaxBrack3 + TaxBrack4 + TaxBrack5 + TaxBrack6 + TaxBrack7);
	AGITax = adjustedGrossIncome / TotalTax;
	GrossIncomeTax = grossIncome / TotalTax;
	cout << "Taxes owed at 10%: $" << TaxBrack1 << "\n"
		<< "Taxes Owed at 12%: $" << TaxBrack2 << "\n"
		<< "Taxes Owed at 22%: $" << TaxBrack3 << "\n"
		<< "Taxes Owed at 24%: $" << TaxBrack4 << "\n"
		<< "Taxes Owed at 32%: $" << TaxBrack5 << "\n"
		<< "Taxes Owed at 35%: $" << TaxBrack6 << "\n"
		<< "Taxes Owed at 37%: $" << TaxBrack7 << "\n"
		<< "Total Taxes Owed: $" << TotalTax << "\n"
		<< "Taxes Owed as percentage of AGI:" << AGITax <<"%\n"
		<< "Taxes Owed as percentage of gross income:" << GrossIncomeTax <<"%\n";
	
	return 0;

}