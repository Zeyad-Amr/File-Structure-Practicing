#include <fstream>
#include <iostream>
using namespace std;

int main() {
    char ch;
    fstream infile;

    infile.open("C:/Users/Zeyad-Amr/Documents/GitHub/File-structure-Practicing/reading/file.txt", ios::in);
    infile.unsetf(ios::skipws);

    // start reading from file
    infile.read(&ch,1);
    while(!infile.fail()){
        cout<<ch;
//        infile>>ch; // another way for reading a character
        infile.read(&ch,1);
    }

    // end reading from file


    infile.close();
}
