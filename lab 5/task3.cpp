#include <iostream>
#include <string>
using namespace std;
class File {
protected:
 string fileName;
public:
    File(string name) : fileName(name) {
    cout << "File '" << fileName << "' opened" << endl;
}
File() {
    cout << "File '" << fileName << "' closed" << endl;
  }
};
class TextFile : public File {
private:
    int lines;
public:
    TextFile(string name, int l) : File(name), lines(l) {
    cout << "TextFile created. Lines: " << lines << endl;
    }
    TextFile() {
    cout << "TextFile '" << fileName << "' being destroyed" << endl;
    }
};
int main() {
    cout << " File Handling System" << endl;
    cout << "Creating TextFile object..." << endl;
    TextFile txt("document.txt", 150);
    cout << "\nInside main function..." << endl;
    cout << "Exiting main..." << endl;
    
    return 0;
}
