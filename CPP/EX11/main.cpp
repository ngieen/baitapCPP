#include <iostream>

using namespace std;

double a_penny_doubled_everyday(int day_count, double total_amount);  

void amount_accumulated() {
	
	double total_amount (0.01);
	int day_count (24);
	total_amount = a_penny_doubled_everyday(day_count,total_amount);
	cout <<  "If I start with a penny and doubled it every day for 25 days, I will have "  << total_amount <<" $";
}

double a_penny_doubled_everyday(int day_count, double total_amount) {
	if (day_count==0)
		return total_amount;
	else
		return a_penny_doubled_everyday(day_count-1,total_amount*2);
}

int main()
{
	amount_accumulated();
	return 0;
}
