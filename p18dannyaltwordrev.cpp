#include <iostream>
#include <string>
using namespace std;

int main(){
	string line, word1, word2, reversedLine;
	cout<< "\nEnter line ";
	getline(cin,line);
	
	// remove whitespace
	for(int i = 0; i < line.length(); i++){
		if(line[i] == ' ' && line[i-1] == ' '){
			for(int j = i; j < line.length(); j++){
				line[j] = line[j+1];
			}	
			i--;
		}
	}
	cout<< "Line after removing space = " << line<<endl;
	
	int i = 0;
	while(i<line.length()){
		while(line[i] != ' ' && i < line.length()){
			word1+=line[i];
			i++;
		}
		i++;
		while(line[i] != ' ' && i < line.length()){
			word2+=line[i];
			i++;
		}
		i++;
		
		reversedLine+= word2 + " " + word1 + " ";
		word1 = "";
		word2 = "";
	}
	
	// remove whitespace from reversed string
	for(int i = 0; i < reversedLine.length(); i++){
		if(reversedLine[i] == ' ' && reversedLine[i-1] == ' '){
			for(int j = i; j < reversedLine.length(); j++){
				reversedLine[j] = reversedLine[j+1];
			}	
			i--;
		}
	}
	cout<<reversedLine;	
}
