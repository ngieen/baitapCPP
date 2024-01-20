#include <iostream>
using namespace std;

string reverse_string(const string &str) {
    int size = str.length();
    char* reversed = new char[size + 1]; 
    reversed[size] = '\0'; 
    for (int i = size - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = str[i];
    }

    string result(reversed);


    return result;
}

int main() {
    string input = "Hello, World!";
    string reversed = reverse_string(input);

    cout << "Reversed string: " << reversed << endl;
    return 0;
}