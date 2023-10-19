#include<iostream>
using namespace std;
class food
{
private:
	int foul, falafel, foul_sum, falafel_sum, cash,total_price;
	double taxic;
public:
	food();
	void set_foul(int x);
	void set_falafel(int x);
	int get_foul_price();
	int get_falafel_price();
	double tax();
	int Cash();
	int total_Price();
	~food();
};

