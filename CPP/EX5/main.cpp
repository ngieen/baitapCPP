#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void cpp_string()
{
	string unformatted_full_name {"StephenHawking"};
	string first_name = unformatted_full_name.substr (0,7);
	string last_name = unformatted_full_name.substr (7,7);
	string formatted_full_name = first_name + last_name; 
	formatted_full_name.insert(7," ");
	cout << formatted_full_name;
}

int main()
{
	cpp_string();
	return 0;
}
