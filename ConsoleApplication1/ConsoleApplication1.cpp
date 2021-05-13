// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string FirstName = "idiot don't write Name";
    string LastName = "idiot dont write Last Name";
    string SurName = "idiot dont write sourname";
    // marks
    double mark0 = NULL;
    double mark1 = NULL;
    double mark2 = NULL;
    double mark3 = NULL;
    double mark4 = NULL;
    double mark5 = NULL;
    double mark6 = NULL;
    double mark7 = NULL;
    double mark8 = NULL;
    double mark9 = NULL;

    double AvarageMark = NULL;

    // end marks
    int choise = NULL;

    std::ofstream out;          // поток для записи
    out.open("D:\\hello.txt", std::ios::app); // окрываем файл для записи
    if (out.is_open())
    {
    tryAgain:
        cout << "enter function" << endl ;
        cout << "1 - New Student" << endl << "2 - Exit" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1: // Не совпадает!
            cout << "Enter FirstName" << " ";
            cin >> FirstName;
            cout << "Enter LastName" << " ";
            cin >> LastName;
            cout << "Enter SurName" << " ";
            cin >> SurName;
            
            cout << endl << "Enter mark 1" << endl;
            cin >> mark0;
            cout << endl <<  "Enter mark 2" << endl;
            cin >> mark1;
            cout << endl << "Enter mark 3" << endl;
            cin >> mark2;
            cout << endl << "Enter mark 4" << endl;
            cin >> mark3;
            cout << endl << "Enter mark 5" << endl;
            cin >> mark4;
            cout << endl << "Enter mark 6" << endl;
            cin >> mark5;
            cout << endl << "Enter mark 7" << endl;
            cin >> mark6;
            cout << endl << "Enter mark 8" << endl;
            cin >> mark7;
            cout << endl << "Enter mark 9" << endl;
            cin >> mark8;
            cout << endl << "Enter mark 10" << endl;
            cin >> mark9;
            AvarageMark = (mark0 + mark1 + mark2 + mark3 + mark4 + mark5 + mark6 + mark7 + mark8 + mark9) / 10;

            out << FirstName << " " << LastName << " " << SurName << endl;
            out << mark0 << " ";
            out << mark1 << " ";
            out << mark2 << " ";
            out << mark3 << " ";
            out << mark4 << " ";
            out << mark5 << " ";
            out << mark6 << " ";
            out << mark7 << " ";
            out << mark8 << " ";
            out << mark9 << " ";
            out << "Avarege Mark = " << AvarageMark << endl;

            goto tryAgain;
            break;
        case 2: // Совпало!
            break;
        default:
            break;
        }
    }

    std::cout << endl << "End of program" << std::endl;
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
