#include <iostream>
using namespace std;

void reverse_array(int* arr, int size) {
	int t;
	for (int i=size-1; i> 0; i-- ) {
		for (int j=0; j< i; j++ ) {
		t= arr[j+1];
		arr[j+1]=arr[j];
		arr[j]=t;
	}		
}}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	reverse_array(arr, size);
	for (int i=0; i< size; i++ ) {
		cout<<arr[i]<<" ";
	}
	return 0;
}
