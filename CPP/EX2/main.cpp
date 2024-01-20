#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector <int> vec{10,20,30,40,50};
	for (int i=0; i< vec.size(); i++) {
        cout << vec.at(i)<< " ";
	}
	cout<<endl;
	vec[0]=100;
	vec[4]=1000;
	for (int i=0; i< vec.size(); i++) {
        cout << vec.at(i)<< " ";
	}
	return 0;
}
