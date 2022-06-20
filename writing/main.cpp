#include <fstream>
#include <iostream>
using namespace std;

int main() {

    fstream myfile;

    myfile.open("../file.txt", ios::in|ios::out|ios::trunc|ios::binary);
    myfile<<"Hello, world. Hello, again.";

    // seekp to set the cursor at a certian char for PUTING

    myfile.seekg(12, ios::beg);
    myfile<<'X'<<'X';
    myfile.seekp(3, ios::cur);
    myfile<<'Y';
    myfile.seekp(-2, ios::end);
    myfile<<'Z';

    // seekg to set the cursor at a certian char to GETING
    myfile.seekg(-2, ios::end);
    char ch;
    myfile.read(&ch, 1);
    cout<<ch<<endl;

    myfile.close();

}
