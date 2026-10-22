#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n;
    double grade, credits;
    double totalCredits = 0;
    double totalGradePoints = 0;

    cout << "===== CGPA CALCULATOR =====\n";

    cout << "Enter number of courses: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of courses!\n";
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        cout << "\nEnter course name " << i << ": ";
        string course;
        cin >> course;

        cout << "Enter grade point: ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credits;

        if (grade < 0 || grade > 10 || credits <= 0) {
                
            cout << "Invalid grade or credit hours!\n";
            return 1;
        }

        totalGradePoints += grade * credits;
        totalCredits += credits;

        cout << "Course: " << course
             << " | Grade: " << grade
             << " | Credits: " << credits << "\n";
    }

    double gpa = totalGradePoints / totalCredits;

    cout << "\n===== FINAL RESULT =====\n";
    cout << "Total Credits: " << totalCredits << "\n";
    cout << "Total Grade Points: " << totalGradePoints << "\n";
    cout << fixed << setprecision(2);
    cout << "Calculated GPA: " << gpa << "\n";

    return 0;
}