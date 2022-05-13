#include <iostream>
#include <conio.h>
using namespace std;
int print_area(int n,int location){
	for(int i = 0; i<n*n;i++){
		if(0 == i%n){
			cout<<"\n";
		}
		if(i==location){
			cout<<1;
		} else{
			cout<<0;
		}
	}
	cout<<"\n";
}
int main()
{	
	int n;
	cout<<"Please enter a value for n";
	cin>>n;
	int location = n*(n-1);
	bool loop = true;
	print_area(n,location);
	while (loop)
	{
		int ch = _getch();
		if (ch == 224)
		{
			ch = _getch();
			switch (ch)
			{
			case 72:
				cout << "up\n";
				if(location<n){
					cout<<"Sorry you cannot move up";
				}else{
					location -=n;
					print_area(n,location);
				}
				break;
			case 80:
				cout << "down\n";
				if(n*(n-1)<=location){
					cout<<"Sorry you cannot move down";
				}else{
					location+=n;
					print_area(n,location);
				}
				break;
			case 77:
				cout << "right\n";
				if(location%n == n-1){
					cout<<"Sorry you cannot move right";
				}else{
					location+=1;
					print_area(n,location);
				break;
			case 75:
				cout << "left\n";
				if(location%n == 0){
					cout<<"Sorry you cannot move left";
				}else{
					location-=1;
					print_area(n,location);
				break;
				break;
			default:
				cout << "unknown\n";
			}
		}
	}
}
}}
