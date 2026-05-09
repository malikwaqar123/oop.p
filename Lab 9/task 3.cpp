#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream source("notes.txt");
    ofstream destination("copy.txt");
    string line;

    while(getline(source, line))
    {
    destination << line << endl;
    }
    source.close();
    destination.close();

    cout << "File copied successfully." << endl;

    return 0;
}
