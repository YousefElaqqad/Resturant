#include"food.h"
#include<iostream>
using namespace std;
int main()
{
	food f;
	int foul, falafel,user=1;
	do
	{
		cout << "user: " << user<<"\n";
		cout << "foul\tfalafel\n";
		cin >> foul >> falafel;
		f.set_foul(foul);
		f.set_falafel(falafel);
		cout << "foulcash\tfalafelcash\ttax\tcash\n";
		cout << f.get_foul_price()*4.5<<"\t\t";
		cout << f.get_falafel_price()*4.5<<"\t\t";
		cout << f.tax() << "\t";
		cout << f.Cash()<<"\n\n";
		f.total_Price();
		user++;
	} while (foul!=0||falafel!=0);
	return 0;
}
