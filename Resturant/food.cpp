#include "food.h"
#include<iostream>
using namespace std;
food::food() :taxic(0),cash(0),foul(0),falafel(0),foul_sum(0), falafel_sum(0),totalPrice(0)
{
	cout << "Press 0 to end\n";
	cout << "there is .5 for sandwatch + 1 pound tax(delivery)\n";
	
}
void food::set_foul(int x)
{ 
	foul = x;
	foul_sum += foul;
}
void food::set_falafel(int x)
{
	falafel= x;
	falafel_sum += falafel;
}
int food::get_foul_price()
{	
	return foul;
}
int food::get_falafel_price()
{   
	return falafel;
}
int food::Cash()
{
	cash = 5 * (foul + falafel) + 1;
	if (foul + falafel == 0)
		cash = 0;
	return cash;
}
double food::tax()
{
	taxic=.5* (foul + falafel) + 1;
	if (foul + falafel == 0)
		taxic = 0;
	return taxic;
}
int food::total_price()
{
	totalPrice += cash;
	return totalPrice;
}
food::~food()
{
	cout << "Thank You for using our application";
}