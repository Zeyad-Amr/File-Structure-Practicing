#include <fstream>
#include <iostream>
using namespace std;

int main() {
    char ch;
    fstream myfile;

    myfile.open("file.txt", ios::in|ios::out|ios::trunc|ios::binary);

    myfile<<"Hello, world. Hello, again.";
    myfile.seekg(12, ios::beg);
    myfile<<'X'<<'X';
    myfile.seekp(3, ios::cur);
    myfile<<'Y';
    myfile.seekp(-2, ios::end);
    myfile<<'Z';


    myfile.close();
}
