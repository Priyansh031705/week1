#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString;

    // Prompt the user to enter a string
    cout << "Enter a string: ";
    getline(cin, inputString);  // Use getline to handle spaces in the input

    // Reverse the string
    int length = inputString.length();
    for (int i = 0; i < length / 2; ++i) {
        char temp = inputString[i];
        inputString[i] = inputString[length - i - 1];
        inputString[length - i - 1] = temp;
    }

    // Print the reversed string
    cout << "Reversed string: " << inputString << endl;

    return 0;
}
