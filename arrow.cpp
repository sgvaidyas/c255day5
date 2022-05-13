#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    bool loop = true;
    while (loop) {
        int ch = getch();
        if (ch == 224) {
            ch = getch();
            switch (ch) {
            case 72: cout << "up\n";    break;
            case 80: cout << "down\n";  break;
            case 77: cout << "right\n"; break;
            case 75: cout << "left\n";  break;
            default: cout << "unknown\n";
            }
        }
        else {
            cout << char(ch) << '\n';
            if (char(ch) == 'q')
                loop = false;
        }
    }
}
