#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	unsigned char a;
	while(1)
	{		
		a=getch();
		//for detect the function\arrow keys 
		//we must call the getch() again
		//testing if a is '0' or '0xE0'
		if (a==0 || a==0xE0) a=getch();
		
		if (a==27) //ESC for exit the 'while'
			break;
		else if (a==72)
			cout<<"UP";
		else if (a==80)
			cout<<"DOWN";
		else if (a==75)
			cout<<"LEFT";
		else if (a==77)
			cout<<"RIGHT";		
		else
			cout<<(int) a;	
	}
	return 0;
}
