#include <iostream>

void PrintNumbers(bool type, int N)
{
	if (type)
	{
		for (int i = 0; i < N; i++)
		{
			if (!(i % 2))
			{
				std::cout << i << " ";
			}
		}
	}
	else
	{
		for (int i = 0; i <= N; i++)
		{
			if (i % 2)
			{
				std::cout << i << " ";
			}
		}
	}
}


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

	std::cout << std::endl;
	PrintNumbers(0, N);

	std::cout << std::endl;
	PrintNumbers(1, N);

	return 0;
}