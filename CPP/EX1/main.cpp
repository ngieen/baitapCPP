#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> arr(10,0);
	for (int i : arr) {
		cout<< arr.at(i)<< " ";
	}
	cout<<endl;
	arr[0]=100;
	arr[9]=1000;
	for (int i=0; i< arr.size(); i++) {
        cout << arr.at(i)<< " ";
	}
	cout<<endl;
	return 0;
}
