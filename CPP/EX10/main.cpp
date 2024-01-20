#include <iostream>
using namespace std;

int sum_of_digits(int n) {
	if (n<10)
		return n;
	else 
		return ((n%10) + sum_of_digits(n/10));
}

int main()
{
	int n;
	cout << "Nhap gia tri n: " << endl;
	cin >> n;
	cout << "Tong cac chu so: "<< sum_of_digits(n)<< endl;
	return 0;
}
