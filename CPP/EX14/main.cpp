#include <iostream>
using namespace std;

int findMaxElement(int* arr,int size) {
	int maxElement= 0;
	for (int i=0; i< size; i++ ) {
		if (arr[i] >= maxElement)
			maxElement = arr[i];
	}
	return maxElement;
}

int main()
{
	int arr[] {12, 45, 67, 23, 9};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << " Phan tu lon nhat cua mang: " << findMaxElement(arr,size);
	return 0;
}
