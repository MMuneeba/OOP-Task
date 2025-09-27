//#include<iostream>
//#include<fstream>
//using namespace std;
//
//int main(){
//    fstream out("greet.txt", ios::out);
//    cout << "Postion of write pointer before writing: " << out.tellp() << endl;
//    out << "A";
//    cout << "Postion of write pointer after writing a single character: " << out.tellp() << endl;
//    out.close();
//    return 0;
//}
//
//
////Program 2
//
//#include<iostream>
//#include<fstream>
//using namespace std;
//
//int main(){
//    fstream out("greet.txt", ios::out);
//    cout << "Postion of write pointer before writing: " << out.tellp() << endl;
//    out << "A";
//    cout << "Postion of write pointer after writing a single character: " << out.tellp() << endl;
//    out.close();
//    return 0;
//}
//
//
////Program 3
//
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//    fstream in("greet.txt", ios::in);
//    cout << "Postion of read pointer before reading: " << in.tellg() << endl;
//    char ch;
//    in.get(ch);
//    cout << "Postion of read pointer after reading a single character: " << in.tellg() << endl;
//    in.close();
//    return 0;
//}

// Program 4

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file("student.txt", ios::in | ios::out | ios::trunc);
    file << "01,Awais,3.5 ";
    file << "02,Kashif,3.8 ";
    file << "03,Zahid,2.5 ";
    file << "04,Ahmed,4.0 ";
    cout << "Position of write pointer after writing: " << file.tellp() << endl;
    //one record takes 13 characters and the moment pointer is at 53 means next writing will be start from
    //53 but lets move it back to override the last line
    //file.seekp(file.tellp()-13); //absolute postion without direction.
    file.seekp(-13, ios::cur); //relative with reference to current position.
    file << "05,Nadir,2.78";
    file.close();
    return 0;
}





