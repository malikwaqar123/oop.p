#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outFile("students.txt");
    outFile << "Ali - 101" << endl;
    outFile << "Ahmed - 102" << endl;
    outFile << "Sara - 103" << endl;
    outFile.close();

    ifstream inFile("students.txt");
    string line;

    cout << "Student Details:" << endl;
    while(getline(inFile, line))
    {
    cout << line << endl;
    }
    inFile.close();

    return 0;
}
