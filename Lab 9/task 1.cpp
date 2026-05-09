#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outFile("notes.txt");
    outFile << "Welcome to OOP" << endl;
    outFile << "File handling in C++" << endl;
    outFile << "This is Week 09 lecture" << endl;

    outFile.close();
    
    cout << "File contents after writing:" << endl;

    ifstream inFile("notes.txt");
    string line;
    while(getline(inFile, line))
    {
    cout << line << endl;
    }
    inFile.close();
    ofstream appendFile("notes.txt", ios::app);

    appendFile << "Name: Ali" << endl;
    appendFile << "Roll No: 23-CS-101" << endl;

    appendFile.close();
    cout << "Data appended successfully." << endl;

    return 0;
}
