#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int count(0);
	vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
	for (int i=0; i< vec.size(); i++) {
        if (vec.at(i)%3==0||vec.at(i)%5==0)
		++count;	
	}
	cout<<count<<endl;
	return 0;
}
