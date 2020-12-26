#include <iostream>

int main()
{
	int N = 25; // max number for printing

	for (int i = 0; i < N; i++)
	{
		if (!(i % 2))
		{
			std::cout << i << " ";
		}
	}
	return 0;
}