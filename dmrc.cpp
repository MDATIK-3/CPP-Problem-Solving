#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip> // for setw()

using namespace std;

struct Date {
    int day, month, year;
};

bool compareDates(const Date &dateA, const Date &dateB) {
    if (dateA.year != dateB.year)
        return dateA.year < dateB.year;
    if (dateA.month != dateB.month)
        return dateA.month < dateB.month;
    return dateA.day < dateB.day;
}

void muku() {
    int numTestCases;
    cin >> numTestCases;
    
    for (int caseIdx = 1; caseIdx <= numTestCases; ++caseIdx) {
        int numDates;
        cin >> numDates;
        
        vector<Date> dates(numDates);
        for (int dateIdx = 0; dateIdx < numDates; ++dateIdx) {
            char separator;
            cin >> dates[dateIdx].day >> separator >> dates[dateIdx].month >> separator >> dates[dateIdx].year;
        }
        
        sort(dates.begin(), dates.end(), compareDates);
        
        cout << "Case #" << caseIdx << ":\n";
        for (const auto &date : dates) {
            cout << setfill('0') << setw(2) << date.day << '/' << setw(2) << date.month << '/' << date.year << '\n';
        }
    }
}

int main() {
    muku();
    return 0;
}
