#include <iostream>
#include <string>
using namespace std;
int main(){
	string line;
	char space = ' ';
	bool sorting = true;
	cout<<"\n Enter line = ";
	getline(cin,line);
	int counter = 0;
	while(sorting){
		sorting = false;
		for(int i = 0; i<line.length()-1-counter; i++){
			if(line[i] == space && line[i+1]==space){
				counter++;
				sorting = true;
				for(int j = i; j<line.length(); j++){
					line[j] = line[j+1];
					
				}
				
			}
		}
	}				
	cout<<line.substr(0,line.length()-counter);
}

