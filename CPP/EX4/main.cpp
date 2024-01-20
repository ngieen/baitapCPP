#include <iostream>
#include <vector>
#include <utility>
using namespace std;


int main()
{
	int a;
	cout<<"Nhap so luong phan tu cua mang: ";
	cin>>a;
	if (a>1)
	{
		vector<int> vec(a,0);
		cout<<"Nhap cac phan tu cua mang: "<<endl;
		for (int i = 0; i < vec.size(); ++i) {
			cout<<"Phan tu thu "<<i+1<<": ";
			cin>>vec[i];
		}	
		int tich(0);
		int result(0);
		for (int i = 0; i < vec.size() - 1; ++i) {
			for (int j = i + 1; j < vec.size(); ++j) {
			tich=vec[i]*vec[j];
			result+=tich;
			}
		}
		cout<<result<<endl;
	}
	else if(a<=1)
	{
		return 0;
	}
	return 0;
}
