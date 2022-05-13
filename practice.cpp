#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	
	cout<<"\n Enter the string  = ";
	getline(cin,a);
	
	int i=0,j,len = a.length();
	while(i<len)
	{
		if(a[i]==' ' && a[i+1]==' ')
		{
			for(j=i+1;j<len-1;j++)
				a[j] = a[j+1];
			len--;
			continue;
		}
		i++;
	}
	a[i]='\0';
	cout<<"line ="<<a<<endl;
}
