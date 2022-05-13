#include <iostream>

using namespace std;

template<class T>
void remove(T* arr, int& n, int j)
{
	for (int i = j; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}

	n--;
}

int main()
{
	char arr[100];
	int i = 0;
	int start_space;
	int n = 0;
	bool is_space = false;

	cin.getline(arr, sizeof(arr));

	while (arr[i] != '\0')
	{
		i++;
	}

	n = i;
	i = 0;

	while (arr[i] != '\0')
	{
		if (arr[i] == ' ')
		{
			start_space = i;

			if (is_space)
				remove(arr, n, i);
			else
				i++;

			is_space = true;
		}
		else if (is_space)
			is_space = false;
		else
			i++;
	}

	cout << arr;
}

