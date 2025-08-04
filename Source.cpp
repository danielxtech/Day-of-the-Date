#include <iostream>
#include <stdexcept> 
using namespace std;

string getDayOfWeek(int d, int m, int y) {

    if (m < 3) {
        m += 12;
        y -= 1;
    }
    int k = y % 100;
    int j = y / 100;

    int f = d + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j;
    int dayIndex = f % 7;

    string days[] = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
    return days[dayIndex];
}
    void validateDate(int d, int m, int y)
    {
        if (y < 1)
            throw invalid_argument("Year must be 1 or later.");
        if (m < 1 || m > 12)
            throw invalid_argument("Month must be between 1 and 12.");
        if (d < 1 || d > 31)
            throw invalid_argument("Day must be between 1 and 31.");
        if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
            throw invalid_argument("This month has only 30 days.");
        if (m == 2)
        {
            // Check for leap year
            bool isLeap = (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
            if (d > 29 || (!isLeap && d > 28))
                throw invalid_argument("Invalid day for February.");
        }
    }


int main() {
   
    int day, month, year;

    try {
     
        cout << "Enter year: ";
        cin >> year;

        cout << "Enter month (1-12): ";
        cin >> month;

        cout << "Enter day (1-31): ";
        cin >> day;

        validateDate(day, month, year); // Validate inputs

        string result = getDayOfWeek(day, month, year);
        cout << "The day of the week is: " << result << endl;

    }
    catch (const invalid_argument& e) {
        cerr << "Input error: " << e.what() << endl;
    }
    catch (...) {
        cerr << "Unknown error occurred." << endl;
    }

    return 0;
}
