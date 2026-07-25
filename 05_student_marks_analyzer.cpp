#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "Enter number of students (N): ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of students!" << endl;
        return 0;
    }

    double marks[n];
    double sum = 0;

    cout << "Enter marks of " << n << " students:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> marks[i];
        sum += marks[i];
    }

    // Sort marks in descending order using C++ std::sort
    sort(marks, marks + n, greater<double>());

    double average = sum / n;

    cout << "\n------------------------------------" << endl;
    cout << "      STUDENT MARKS ANALYSIS        " << endl;
    cout << "------------------------------------" << endl;

    cout << "Top Marks:" << endl;
    int topLimit = min(n, 3);
    for (int i = 0; i < topLimit; i++) {
        cout << "  Rank " << (i + 1) << ": " << marks[i] << endl;
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Score: " << average << endl;
    cout << "------------------------------------" << endl;

    return 0;
}
