#include <iostream>
using namespace std;

void multiply_with_pointer(int* ptr, int multiplier) {
	
	*ptr *= multiplier;
	
}

int main()
{
	int a=10;
	int *ptr= &a;
	int multiplier= 3;
	multiply_with_pointer( ptr, multiplier);
	cout << a;
	return 0;
}
