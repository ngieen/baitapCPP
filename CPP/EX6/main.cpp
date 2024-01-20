#include <iostream>
#include <string>
using namespace std;

void cpp_strings() {
    
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};

	journal_entry_1.erase (0,6);
	if (journal_entry_1[0]> journal_entry_2[0]) {
		journal_entry_1.swap(journal_entry_2);
	}
	
	
	
	
	cout << journal_entry_1 << "\n" << journal_entry_2;
}

int main()
{
	cpp_strings();
	return 0;
}
