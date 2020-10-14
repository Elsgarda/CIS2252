#pragma once

class BankSavings
{
public:
	BankSavings()
	{
		InterestRate = .01;
		 SavingsInBank = 0;
		 ChangeInBankSavings = 0;
	}
	double getInterestRate()
	{
		return InterestRate;
	}
	double setSavingsInBank(double SavingsInBank)
	{
		if (ChangeInBankSavings < 0)
		{
			this->SavingsInBank -= ChangeInBankSavings;
		}
		else
		{
			this->SavingsInBank += ChangeInBankSavings;
		}
	}
	double setChangeInBankSavings()
	{
		return ChangeInBankSavings;
	}
private:
	double InterestRate;
	double SavingsInBank;
	double ChangeInBankSavings;
};