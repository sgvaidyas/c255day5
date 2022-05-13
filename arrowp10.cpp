#include <iostream>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main()
{
    int c = 0;
    while(1)
    {
        c = 0;

        switch((c=getch())) {
        case KEY_UP:
            cout <<  "Up" ;//key up
            break;
        case KEY_DOWN:
            cout <<  "Down" ;   // key down
            break;
        case KEY_LEFT:
            cout << "Left" ;  // key left
            break;
        case KEY_RIGHT:
            cout << "Right" ;  // key right
            break;
        default:
        	cout<<c;
            cout << "null" ;  // not arrow
            break;
        }

    }

    return 0;
}
