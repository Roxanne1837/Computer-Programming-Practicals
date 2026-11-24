#include <iostream>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string course;
    string hobby;
    string reason;
    string expectation;
    string definition;

     // ==================================================
    // QUESTION 1: NAME
    // ==================================================

    cout << "==================================================" << endl;
    cout << "     WELCOME TO YOUR FIRST PROGRAM!" << endl;
    cout << "==================================================" << endl;
    cout << endl;

    cout << "1. What is your name? ";
    getline(cin, name);  // Reads the full line, including spaces

    // ==================================================
// QUESTION 2: COURSE (BBIT or BCS)
// ==================================================

cout << "2. What course are you doing? (BBIT/BCS): ";
getline(cin, course);

// ============================================================
// QUESTION 3: HOBBY
// ============================================================

cout << "3. What is your hobby? ";
getline(cin, hobby);

// ============================================================
// QUESTION 4: REASON FOR CHOOSING THE COURSE
// ============================================================

cout << "4. Why did you choose this course? ";
getline(cin, reason);

// ============================================================
// QUESTION 5: EXPECTATION
// ============================================================

cout << "5. What are your expectations from this course? ";
getline(cin, expectation);

// ============================================================
// QUESTION 6: DEFINITION OF PROGRAMMING
// ============================================================

cout << "6. How would you define programming? ";
getline(cin, definition);

// ============================================================
// DISPLAY THE SUMMARY
// ============================================================

cout << endl;
cout << "========================================" << endl;
cout << " YOUR PROFILE SUMMARY" << endl;
cout << "========================================" << endl;
cout << endl;

cout << "Name: " << name << endl;
cout << "Course: " << course << endl;
cout << "Hobby: " << hobby << endl;
cout << "Reason: " << reason << endl;
cout << "Expectation: " << expectation << endl;
cout << "Programming is: " << definition << endl;
cout << endl;
cout << "========================================" << endl;
cout << " Thank you for completing this!" << endl;
cout << "========================================" << endl;

return 0;
}
