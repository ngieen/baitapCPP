#include <iostream>
using namespace std;

void swapPointers(int *ptr1, int *ptr2) {
	
	int tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
	
}
int main()
{
	int a {5};
	int b {10}; 
	int* ptrA = &a;
	int* ptrB = &b; 
	swapPointers(ptrA, ptrB);
	cout<<a<<" "<<b;
	return 0;
}
