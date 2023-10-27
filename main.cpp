#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));

	int list[52];
	for (int i = 0; i < 52; i++)
	{
		list[i] = i + 1;
	}

	for (int i = 0; i < 4; i++)	
	{
		int a = rand() % 52 + 0;
		if (list[a] != 0)
		{
			cout << list[a] << endl;
			list[a] = 0;
		}
		else
		{
			continue;
		}
	}

	return 0;
}