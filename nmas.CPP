#include<iostream>
#include<string>
using namespace std;

// Base class Student
class Student {
protected:
    int roll_no;
    string name;
    int age;
    string standard;

public:
    // Constructor to initialize student details
    Student(int r, string n, int a, string s) {
        roll_no = r;
        name = n;
        age = a;
        standard = s;
    }

    // Function to display student details
    void displayStudentInfo() {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Standard: " << standard << endl;
    }
};

// Derived class Exam inheriting Student class
class Exam : public Student {
protected:
    int marks[6];  // Marks in six subjects


public:
    // Constructor to initialize exam details
    Exam(int r, string n, int a, string s, int m[6]) : Student(r, n, a, s) {
        for(int i = 0; i < 6; i++) {
            marks[i] = m[i];
        }
    }

    // Function to display marks
    void displayMarks() {
        cout << "Marks in Subjects: ";
        for(int i = 0; i < 6; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

// Derived class Result inheriting Exam class
class Result : public Exam {
private:
    int total;
    float percentage;
  string result;
    char grade;

public:
    // Constructor to initialize result details
    Result(int r, string n, int a, string s, int m[6]) : Exam(r, n, a, s, m) {
        total = 0;
        for(int i = 0; i < 6; i++) {
            total += marks[i];
        }
        percentage = total / 6.0;

        // Determine result and grade based on percentage
        if(percentage >= 90) {
            result = "Pass";
            grade = 'A';
        } else if(percentage >= 75) {
            result = "Pass";
            grade = 'B';
        } else if(percentage >= 60) {
            result = "Pass";
            grade = 'C';
        } else {
            result = "Fail";
            grade = 'F';
        }
}

    // Function to display result details
    void displayResult() {
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Result: " << result << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    int marks[6] = {85, 90, 75, 88, 92, 80};

    // Creating an object of Result class
    Result student1(101, "John Doe", 16, "10th Grade", marks);

    // Displaying student details
    student1.displayStudentInfo();

    // Displaying marks
    student1.displayMarks();

    // Displaying result
    student1.displayResult();

 return 0;
}