#pragma once
#include <ctime>
#include <cstdlib>

class MoneyMarket
{
public:
	MoneyMarket()
	{
		MoneyInMarket = 0;
		ChangeInMoneyMarket = 0;
		srand(time(0));
	}
	double setChangeInMoneyMarket(double ChangeInMoneyMarket)
	{
		if (ChangeInMoneyMarket < 0)
		{
			this->MoneyInMarket -= ChangeInMoneyMarket;
			MoneyInMarket - 10;
		}
		else
		{
			this->MoneyInMarket += ChangeInMoneyMarket;
		}
	}
	double getMoneyInMarket()
	{
		return MoneyInMarket;
	}
	void setReturnRate()
	{
		int RateofReturn = rand() % 5 - 6;
		ReturnPercentage = RateofReturn / 100;
	}
	double getReturnPercentage()
	{
		return ReturnPercentage;
	}

private:
	double MoneyInMarket;
	double ChangeInMoneyMarket;
	double ReturnPercentage;
};