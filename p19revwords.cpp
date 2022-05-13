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
	line += " ";
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
	string temp2 = "";
	cout << strArray[max + 1];
	for (int i = 0; i < max; i++) {
		if (i % 2 == 0 && i + 1 < max) {
			temp2 = strArray[i];
			strArray[i] = strArray[i + 1];
			strArray[i + 1] = temp2;
		}
	}
	for (int j = 0; j < max; j++) {
		result += strArray[j] + " ";
	}
	result += strArray[max];
	cout << result << "\n";
}
