#include <iostream> // Allows the ability to input and output 
#include <iomanip> // Allows to use the setw() function
#include <cmath>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int randArray[100]; 
	int evenArray[100];
	int oddArray[100];

	int odd = 0;
	int even = 0;
	int temp = 1;
	int h = 0;

	for (int i = 0; i < 100; i++)
	{
		int randNum = (rand() % 100) + 1;
		randArray[i] = randNum;
	}

	for (int i = 0; i < 100; i++)
	{
		
		if (randArray[i] % 2 == 0)
		{
			evenArray[even] = randArray[i];
			even++;
		}
		else if (randArray[i] % 2 != 0)
		{
			oddArray[odd] = randArray[i];
			odd++;
		}
	}

	for (int f = 0; f < even; f++)
	{
		randArray[f] = evenArray[f];
		temp++;
	}
	for (int g = temp; g < 100; g++)
	{
		randArray[g] = oddArray[h];
		h++;
	}

	for (int i = 0; i < 100; i++)
	{
		cout << i << "\t" << randArray[i] << endl;
	}
}