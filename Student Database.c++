#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> students;

    int choice;
    string name;

    do {

        cout << "\n=== STUDENT DATABASE ===\n";
        cout << "1. Add Student\n";
        cout << "2. Show Students\n";
        cout << "0. Exit\n";

        cin >> choice;
        cin.ignore();

        switch(choice) {

            case 1:

                cout << "Student Name: ";
                getline(cin, name);

                students.push_back(name);

                break;

            case 2:

                for(int i = 0; i < students.size(); i++) {

                    cout << i + 1
                         << ". "
                         << students[i]
                         << endl;
                }

                break;
        }

    } while(choice != 0);

    return 0;
}
