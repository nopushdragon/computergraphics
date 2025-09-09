#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    while (1) {
        ifstream file;
        string filename;
        cout << "파일 이름을 입력하세요: ";
        cin >> filename;

        file.open(filename);
        if (!file.is_open()) {
            cout << "파일을 열 수 없습니다." << endl;
        }
        else break;
    }

    string str[10];
    int strcnt=0;
    while (getline(file, str[strcnt])) {
        strcnt++;
    }
}
