//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//    string line;
//
//    // Step 1: Create file and write 3 lines
//    ofstream fout("notes.txt");   // open in write mode (creates file)
//    if (!fout) {
//        cout << "Error creating file!" << endl;
//        return 1;
//    }
//    fout << "This is line one." << endl;
//    fout << "This is line two." << endl;
//    fout << "This is line three." << endl;
//    fout.close();
//    cout << "File created and data written successfully.\n";
//
//    // Step 2: Open file in read mode and display contents
//    ifstream fin("notes.txt");
//    if (!fin) {
//        cout << "Error opening file for reading!" << endl;
//        return 1;
//    }
//    cout << "\nContents of notes.txt:\n";
//    while (getline(fin, line)) {
//        cout << line << endl;
//    }
//    fin.close();
//
//    // Step 3: Append name and roll number
//    ofstream foutAppend("notes.txt", ios::app); // append mode
//    if (!foutAppend) {
//        cout << "Error opening file for appending!" << endl;
//        return 1;
//    }
//    string name, roll;
//    cout << "\nEnter your Name: ";
//    getline(cin, name);
//    cout << "Enter your Roll Number: ";
//    getline(cin, roll);
//    foutAppend << "\nName: " << name << ", Roll No: " << roll << endl;
//    foutAppend.close();
//    cout << "Data appended successfully.\n";
//
//    // Step 4: Display updated file
//    fin.open("notes.txt");
//    cout << "\nUpdated contents of notes.txt:\n";
//    while (getline(fin, line)) {
//        cout << line << endl;
//    }
//    fin.close();
//
//    return 0;
//}
////Program 2
//
//
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//    ifstream fin("notes.txt"); // open file in read mode
//    if (!fin) {
//        cout << "Error! File not found." << endl;
//        return 1;
//    }
//
//    string line;
//    int count = 0;
//
//    while (getline(fin, line)) { // read each line
//        count++;
//    }
//
//    cout << "Total number of lines in notes.txt = " << count << endl;
//
//    fin.close();
//    return 0;
//}
 
 //Program 3
 
// #include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//    ifstream fin("notes.txt"); // source file
//    ofstream fout("copy_notes.txt"); // destination file
//
//    if (!fin || !fout) {
//        cout << "Error opening files!" << endl;
//        return 1;
//    }
//
//    string line;
//    int count = 0;
//
//    while (getline(fin, line)) {
//        fout << line << endl; // write into new file
//        count++;
//    }
//
//    cout << "File copied successfully!" << endl;
//    cout << "Total number of lines copied = " << count << endl;
//
//    fin.close();
//    fout.close();
//    return 0;
//}

// Program 4

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing to file
    ofstream outFile("students.txt");
    if (outFile.is_open()) {
        outFile << "Ali 101\n";
        outFile << "Sara 102\n";
        outFile << "Zain 103\n";
        outFile.close();
        cout << "Student details written to file.\n";
    } else {
        cout << "Unable to open file for writing.\n";
    }

    // Reading from file
    ifstream inFile("students.txt");
    string name;
    int rollNo;
    if (inFile.is_open()) {
        cout << "\nStudent Details from File:\n";
        while (inFile >> name >> rollNo) {
            cout << "Name: " << name << ", Roll No: " << rollNo << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading.\n";
    }

    return 0;
}

