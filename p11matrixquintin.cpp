#include <conio.h>
#include <iostream>
using namespace std;
#define KEY_UP 119
#define KEY_DOWN 115
#define KEY_LEFT 97
#define KEY_RIGHT 100
int main()
	{
		int n,i,key=1;
		int left=0, right=n-1, mid;
		int pos, input, oldpos;
		bool top, bot, rig, lef;
		
		cout<<"Please enter a value for n ";
		cin>>n;
		//grid initialisation
		int area = n*n;
		int grid[area];
		for (i = 0; i < area; i++){
			grid[i] = 0;
		}
		pos = area - n;
		grid[pos] = 1;
		
while(true){	
		//print grid
		cout<<"\n";
		for(i=0; i < area; i++){
			cout<<grid[i];
			if ((i % n) == n-1){
				cout<<"\n";
			}
		}
		
		cout<<"\n";
		//check if on edges
		top = (pos < n);
		bot = (pos >= area - n);
		lef = ((pos % n) == 0);
		rig = ((pos % n) == n - 1);
		
		oldpos = pos;
		//input
		while(true){
			input = getch();
			//move up
			if (input == KEY_UP){
				if (top) cout<<"\nYou are already at the top\n";
				else {pos -= n; break;}
			}
			else if (input == KEY_DOWN){
				if (bot) cout<<"\nYou are already at the bottom\n";
				else {pos += n; break;}
			}
			else if (input == KEY_RIGHT){
				if (rig) cout<<"\nYou are already at the right edge\n";
				else {pos += 1; break;}
			}
			else if (input == KEY_LEFT){
				if (lef) cout<<"\nYou are already at the left edge\n";
				else {pos -= 1; break;}
			}
			else cout << "\nPlease try again \n";
		}
		
		grid[oldpos] = 0;
		grid[pos] = 1;
}
		
	}
