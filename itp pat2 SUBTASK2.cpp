#include <iostream>
#include <iomanip> // For fixed and setprecision

using namespace std;

const int NUM_EXPERIMENTS = 3;
const int NUM_READINGS = 3;

int main() {
    int i, j;
    double readingValue, total, average;

    for (i = 1; i <= NUM_EXPERIMENTS; i++) {
        total = 0;
        cout << "\nEXPERIMENT " << i << endl;
        cout << "=============\n";

        for (j = 1; j <= NUM_READINGS; j++) {
            cout << "Enter reading " << j << " value: ";
            cin >> readingValue;
            total = total + readingValue;
        }

        average = total / NUM_READINGS;

        // Incorporate evaluation logic directly
        if (average < 100) {
            cout << "Experiment " << i << " average: "
                 << fixed << setprecision(2) << average
                 << " is Below acceptable range\n";
        } else if (average >= 100 && average <= 300) {
            cout << "Experiment " << i << " average: "
                 << fixed << setprecision(2) << average
                 << " is Within acceptable range\n";
        } else {
            cout << "Experiment " << i << " average: "
                 << fixed << setprecision(2) << average
                 << " is Above acceptable range\n";
        }
    }

    return 0;
}
// Namespace typo: Changed stt to std.

// Function return type: Changed float main() to int main() — standard and correct.

// Loop counters: char i, j changed to int i, j — using char for counting is incorrect.

// Reading logic: Corrected total = total - readingValue to total = total + readingValue.

// Condition error: Fixed logic in if-else blocks:

// The original average >= 100 OR average <= 300 was logically flawed; fixed to average >= 100 && average <= 300
// Missing header: Added #include <iomanip> for setprecision() and fixed.

// Extra characters: Removed extra ; and total = total - readingValue; which were logically incorrect.