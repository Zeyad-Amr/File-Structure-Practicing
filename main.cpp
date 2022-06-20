#include <fstream>
#include <iostream>
using namespace std;
int main() {
    char ch;
    fstream infile;

    infile.open("C:/Users/Zeyad-Amr/Documents/GitHub/File-structure-Practicing/files/sample.txt", ios::in);
    infile.unsetf(ios::skipws);

    infile>>ch;
    while(!infile.fail()){
        cout<<ch;
        infile>>ch;
    }
//    infile.seekg(3, ios::end);
//    infile>>ch;
//    cout<<endl<<ch <<endl;


    infile.close();
}
