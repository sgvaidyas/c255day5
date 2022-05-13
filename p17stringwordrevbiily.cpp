#include <iostream>
#include <string>
using namespace std;
int main(){
	string line, temp1, temp2, returned_string="";
	char space = ' ';
	bool sorting = true;
	cout<<"\n Enter line = ";
	getline(cin,line);
	int counter = 0, previous_end_index=0;
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
	line = line.substr(0,line.length()-counter);
	
	for(int i = 0; i<line.length();i++){
		temp1 = "";
		temp2 = "";
		if(line[0] == space) continue;
		if(line[i]== space){
			temp1 = line.substr(previous_end_index,i);
			previous_end_index = i;
			for(i;i<line.length();i++){
				if (line[i] == space){
					temp2 = line.substr(previous_end_index,i)+ " ";
					previous_end_index =i;
					break;
				}
			}
			
		}
		returned_string += temp2;
		returned_string += temp1;
	}
	cout<<returned_string;
}
