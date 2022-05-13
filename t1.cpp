#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
	cout << "\nEnter line:";
	string line;
	getline(cin, line);
	
	stringstream words(line);
	line = "";
	string word1, word2;
	
	while(words>>word1){
		if (words>>word2) line += word2 + " " + word1 + " ";
		else line += word1;
	}
	
	cout<<line;
}

