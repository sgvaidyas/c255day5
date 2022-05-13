#include <iostream>
#include <string>
using namespace std;
int main()
{
	string line;
	cout<<"\n Enter line = ";
	getline(cin,line);
	string a = line.substr(1,6);
	cout<<a;
}
