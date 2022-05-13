#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	
	cout<<"\n Enter the string  = ";
	getline(cin,a);
	
	string res = "";
	res = res + a[0];
	int len = a.length();
	int i=1,rlen=1,j,flag;
	while(i<len)
	{
		flag=1;
		
		for(j=0;j<rlen;j++)
		{
			
			if(a[i]==res[j])
			{
				flag = 0;
				break;
			}	
		}
		if(flag==1)
		{
			res = res + a[i];
			rlen++;
		}	
		i++;
	}

	cout<<"\n res =  " <<res;
}
