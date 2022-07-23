#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    string name;
    int semester;
    string collegename;
    cout << "Enter your name : \n";
    cin >> name;
    cout << "Enter your college name : \n";
    cin >> collegename;
    cout << "Enter your semester: \n";
    cin >> semester;
    const double O = 10.0;
    const double A_Plus = 9.0;
    const double A = 8.0;
    const double B_PLUS = 7.0;
    const double B = 6.0;
    const double C_PLUS = 5.0;
    const double C = 4.0;
    const double F = 0.0;
    const double Q = 0.0;
    string grade;
    double credit;
    double caltimes = 0;
    double totalcal = 0;
    double totalcredit = 0;
    double finalsgpa = 0;
    int option;
    int n;
    cout << "Enter the total number of subjects: \n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter grade of"
             << " " << i << " "
             << "Subject" << endl;
        cin >> grade;
        cout << "Enter credit of"
             << " " << i << " "
             << "Subject" << endl;
        cin >> credit;

        if (grade == "o" || grade == "O")
        {
            caltimes = credit * O;
        }
        else if (grade == "a+" || grade == "A+")
        {
            caltimes = credit * A_Plus;
        }
        else if (grade == "a" || grade == "A")
        {
            caltimes = credit * A;
        }
        else if (grade == "b+" || grade == "B+")
        {
            caltimes = credit * B_PLUS;
        }
        else if (grade == "b" || grade == "B")
        {
            caltimes = credit * B;
        }
        else if (grade == "c+" || grade == "C+")
        {
            caltimes = credit * C_PLUS;
        }
        else if (grade == "c" || grade == "C")
        {
            caltimes = credit * C;
        }
        else if (grade == "q" || grade == "Q")
        {
            caltimes = credit * Q;
        }
        else if (grade == "f" || grade == "F")
        {
            caltimes = credit * F;
        }
        else
        {
            cout << "Your input is invalid!!" << endl;
        }
        totalcredit = totalcredit + credit;
        totalcal = totalcal + caltimes;
    }
    finalsgpa = totalcal / totalcredit;
    cout << "\n\n"
         << collegename << "\n"
         << endl;
    cout << "Grade card "
         << "\n"
         << endl;
    cout << "Semester " << semester << "\n"
         << endl;
    cout << name << "\n"
         << endl;
    cout << "Your SGPA is : " << finalsgpa << endl;
    cout<<"All the best for your future ! ";
    return 0;
}