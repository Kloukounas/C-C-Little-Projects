#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string students[10] = {"Frodo", "Sam", "Mery", "Pippin", "Aragorn", "Legolas", "Gimli", "Gandalf", "Boromir", "Smeagol"};
int grades[10][5]; // 2D array to store grades

int main()
{
    int x;
    const int row = 10;
    const int col = 5;
    bool gradesEntered = false;
    do
    {

        cout << "-----Student Management------" << endl;
        cout << endl;
        cout << "Press 1 to add student names and grades." << endl;
        cout << "Press 2 to show names and grades." << endl;
        cout << "Press 3 to show the average grades per student." << endl;
        cout << "Press 4 to see who passed and who failed." << endl;
        cout << "Press 5 to show the average of the class." << endl;
        cout << "Press 6 to exit." << endl;
        cout << "Press 7 to see the best student regarding their grade." << endl;
        cout << endl;

        while (true)
        {
            cout << "Please select a number between 1-7."<<endl;
            cout<<":>";
            cin >> x;
            cout << endl;

            if (x == 6) 
            {
                cout << "Thank you!!" << endl
                     << "Goodbye!";
                return 0; 
            }

            if (x >= 1 && x <= 6)
            {
                break;
            }
            else
            {
                cout << "Invalid choice. Please try again." << endl;
            }
        }

        if (x == 1)
        {
            gradesEntered = true;
            cout << "Enter grades for each student (0-10):" << endl;

            for (int i = 0; i < row; i++)
            {
                cout << students[i] << "'s grades: " << endl;
                for (int j = 0; j < col; j++)
                {
                    do
                    {
                        cout << "Lesson " << (j + 1) << ": ";
                        cin >> grades[i][j];
                        if (grades[i][j] < 0 || grades[i][j] > 10)
                        {
                            cout << "Please enter a grade between 0-10." << endl;
                        }
                    } while (grades[i][j] < 0 || grades[i][j] > 10);
                }
                cout << endl;
            }
        }
        else if (x == 2)
        {
            if (gradesEntered)
            {
                cout << "Student Names and Grades:" << endl;
                for (int i = 0; i < row; i++)
                {
                    cout << students[i] << ": ";
                    for (int j = 0; j < col; j++)
                    {
                        cout << grades[i][j] << " ";
                    }
                    cout << endl;
                }
            }
            else
            {
                cout << "Please, enter the grades first." << endl;
            }
        }
        else if (x == 3)
        {
            if (gradesEntered)
            {
                for (int i = 0; i < row; i++)
                {
                    float sum = 0;
                    for (int j = 0; j < col; j++)
                    {
                        sum += grades[i][j];
                    }
                    float average = sum / col; // to calculate average
                    cout << students[i] << ": " << fixed << setprecision(2) << sum / col << endl;
                }
            }
            else
            {
                cout << "Please, enter the grades first." << endl;
            }
        }
        else if (x == 4)
        {
            if (gradesEntered)
            {
                for (int i = 0; i < row; i++)
                {
                    int passed = 0, failed = 0; // Initialize counters for each student
                    for (int j = 0; j < col; j++)
                    {
                        if (grades[i][j] >= 5)
                        {
                            passed++;
                        }
                        else
                        {
                            failed++;
                        }
                    }
                    // Display results for the student
                    cout << students[i] << ": Passed " << passed << ", Failed " << failed << endl;
                }
            }
            else
            {
                cout << "Please, enter the grades first." << endl;
            }
        }
        else if (x == 5)
        {
            if (gradesEntered)
            {
                float totalSum = 0;
                int totalGrades = row * col;

                // Calculate the sum of all grades
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        totalSum += grades[i][j];
                    }
                }

                // Calculate and display the class average
                float classAverage = totalSum / totalGrades;
                cout << "The class average is: " << fixed << setprecision(2) << classAverage << endl;
            }
            else
            {
                cout << endl
                     << "Please enter grades first (Option 1)." << endl;
            }
        }
        else if (x == 7)
        {
            cout << "Sorry, for number 7 i would have to use entirely ai. (failed) ";
        }

    } while (x != 6);
}
