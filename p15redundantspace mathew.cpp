#include <cstdio>
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>

using namespace std;

main()
{
	string line;
	int index = 0;
	int stringSize = 0;
	getline(cin, line);
	//cout << line;
	stringSize = line.size();
	//cout << stringSize;
	
	for (int i = 0; i < stringSize; i++)
	{
		// Write normal character
		if (line[i] != ' ')
		{
			line[index] = line[i];
			index ++;
		}
		// Handle spaces differently
		else
		{
			// if the next character is a space, dont write
			if (line[i+1] == ' ')
			{
				line[index] = '0';
			}
			// else write it
			else
			{
				line[index] = ' ';
				index ++;
			}
		}
		//cout << "\n" << line;
	}
	line.resize(index);
	cout << line;
	cout << "<-end";
	return 0;
}

