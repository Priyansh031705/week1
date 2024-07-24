#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Calculate the sum of all integers
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    // Calculate the average
    double average = static_cast<double>(sum) / n;

    // Print the average
    cout << "Average of the integers is: " << average << endl;

    return 0;
}
