#include <iostream>

using namespace std;

void print_grocery_list (int mangos = 13,int apples = 3, int oranges = 7);

void modify_grocery_list() {
    cout << "This week:" << endl;
	print_grocery_list ();
	cout << "Next week:" << endl;
	print_grocery_list (13,5);
	cout << "Final week:" << endl;
	print_grocery_list (13,7,11);
}


void print_grocery_list (int mangos, int apples, int oranges) { 
        cout << apples << " apples" << "\n" << oranges << " oranges" << "\n" << mangos << " mangos" << "\n";
}
int main()
{
	modify_grocery_list();
	return 0;
}
