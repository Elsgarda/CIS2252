#include <iostream>
#include "BankSavings.h"
#include "MoneyInPocket.h"
#include "MoneyMarket.h"	
#include "Source.h"

using namespace std;

 int main()
 {
	 BankSavings Savings;
	 int CurrentAge;
	 int RetireAge;
	 double BSavings;

	 cout << "How old are you?" << endl;
	 cin >> CurrentAge;
	 cout << CurrentAge << endl;
	 cout << "At what age whould you like to retire" << endl;
	 cin >> RetireAge;
	 cout << RetireAge << endl;

	 cout << "Would you like to add(+) or withdraw(-) from Bank Savings" << endl;
	 cin >> BSavings;
	 Savings.setChangeInBankSavings(BSavings);


		
 }