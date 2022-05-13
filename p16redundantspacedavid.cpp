#include <iostream>
#include <string>
using namespace std;
int main()
{
	string line;
	string strArray[100];
	string result = "";
	getline(cin, line);
	//cout << line;
	string temp = "";
	int count = 0;
	for (int i = 0; line[i] != '\0'; i++) {
		if (line[i] != ' ') {
			temp += line[i];
		}
		else if (temp != "") {
			strArray[count++] = temp;
			temp = "";
		}
	}
	int max = 0;
	for (int i = 0; strArray[i] != "\0"; i++) {
		max = i;
	}
	for (int j = 0; j < max; j++) {
		result += strArray[j] + " ";
	}
	result += strArray[max];
	result += "s";
	cout << result;
}
