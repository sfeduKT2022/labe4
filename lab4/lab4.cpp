// lab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main() {
    string s; 
    ifstream file("file.txt", ios::out); 
    ofstream file_result("file.txt", ios::app);
    stringstream ss;

    while (getline(file, s)) { 
        cout << "Origin strings in file --> Changed text\n\n";
        file_result << s;
        cout << s; 
        string a, b, c, t;
        a = s;
        int i = 0;
        

        t = a;
        while (i < a.length()) {
            if (!isalpha(a[i]))a[i] = ' ';
            i++;
        }
        i = 0;
        ss << a;
        while (i < a.length()) {
            if (a[i] == ' ') { b += a[i];i++; }
            if (isalpha(a[i])) {
                ss >>> c;
                c[0] = c[c.length() - 1];
                b += c;
            }
            while (isalpha(a[i])) {
                i++;
            }
        }
        i = 0;
        while (i < a.length()) {
            if (isalpha(a[i]))t[i] = b[i];
            i++;
        }
        a = t;
        cout << " --> " << a << endl;
        file_result << " --> " << a << " " << endl;
        file.close();
        file_result.close();
    }

}
