#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    while (1) {
        ifstream file;
        string filename;
        cout << "���� �̸��� �Է��ϼ���: ";
        cin >> filename;

        file.open(filename);
        if (!file.is_open()) {
            cout << "������ �� �� �����ϴ�." << endl;
        }
        else break;
    }

    string str[10];
    int strcnt=0;
    while (getline(file, str[strcnt])) {
        strcnt++;
    }
}
