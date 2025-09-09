#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {
    fstream file("data.txt");
    string filename;

    string str[10];
    int strcnt = 0;
    while (getline(file, str[strcnt])) {
        strcnt++;
    }

    for (int i = 0; i < strcnt;i++) {
        cout << str[i] << endl;
    }


}
