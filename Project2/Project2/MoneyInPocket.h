#pragma once

class MoneyInPocket
{
public:
	MoneyInPocket() // Constructor
	{
		Money = 0;
		ChangeInMoney = 0;
	}
	double setChangeInMoney(double ChangeInMoney)
	{
		if (ChangeInMoney < 0)
		{
			this->Money -= ChangeInMoney;
		}
		else
		{
			this->Money += ChangeInMoney;
		}
	}
	double getMoney()
	{
		return Money;
	}
	

private:
	double Money;
	double ChangeInMoney;
};