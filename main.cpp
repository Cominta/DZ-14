#include <iostream>
#include <vector>
#include <time.h>

int main()
{
	// 1
	// const int size = 5;
	// int numbers[size];

	// for (int i = 0; i < size; i++)
	// {
	// 	std::cout << "Enter " << i + 1 << " number: ";
	// 	std::cin >> numbers[i];
	// }

	// for (int i = size - 1; i >= 0; i--)
	// {
	// 	std::cout << numbers[i];
	// }

	// 2
	// srand(time(0));
	// rand();

	// const int size = 20;
	// int numbers[size];

	// for (int i = 0; i < size; i++)
	// {
	// 	numbers[i] = rand() % 100;

	// 	if (numbers[i] % 2 == 0)
	// 	{
	// 		std::cout << numbers[i] << "\n";
	// 	}
	// }

	// 3
	// srand(time(0));
	// rand();

	// const int size = 10;
	// int numbers[size];

	// int count = 0;
	// int sum = 0;
	// int middle = 0;

	// for (int i = 0; i < size; i++)
	// {
	// 	numbers[i] = -20 + rand() % ((20 + 1) - (-20));

	// 	if (numbers[i] > 0)
	// 	{
	// 		count++;
	// 		sum += numbers[i];
	// 	}
	// }

	// middle = sum / count;

	// std::cout << "Count: " << count << "\n";
	// std::cout << "Sum: " << sum << "\n";
	// std::cout << "Middle: " << middle;

	// 4
	// srand(time(0));

	// const int size = 100;
	// char symbols[size];

	// int countNums = 0;
	// int countLetters = 0;
	// int countSymbols = 0;

	// for (int i = 0; i < size; i++)
	// {
	// 	symbols[i] = (char)(rand() % 100); // тут получаются не только знаки пунктуации и тд, но и всякие значки типо ромбика

	// 	if (isalpha(symbols[i]))
	// 	{
	// 		countLetters++;
	// 	}

	// 	else if (isdigit(symbols[i]))
	// 	{
	// 		countNums++;
	// 	}

	// 	else 
	// 	{
	// 		countSymbols++;
	// 	}
	// }

	// std::cout << "Numbers: " << countNums << "\n";
	// std::cout << "Letters: " << countLetters << "\n";
	// std::cout << "Symbols: " << countSymbols << "\n";

	// 5
	// srand(time(0));
	// rand();

	// const int size = 100;
	// int numbers[size];

	// int num;
	// std::cout << "Enter num: ";
	// std::cin >> num;

	// int count = 0;

	// for (int i = 0; i < size; i++)
	// {
	// 	numbers[i] = rand() % 100;

	// 	if (numbers[i] == num)
	// 	{
	// 		count++;
	// 	}
	// }

	// std::cout << "Count: " << count;

	// 6
	// srand(time(0));
	// rand();

	// const int size = 20;
	// int numbers[size];

	// int index;
	// int sum = 0;

	// for (int i = 0; i < size; i++)
	// {
	// 	numbers[i] = -10 + rand() % ((30 + 1) - (-10));
	// }

	// for (int i = 0; i < size; i++)
	// {
	// 	if (numbers[i] < 0)
	// 	{
	// 		index = i;
	// 		break;
	// 	}
	// }

	// for (int i = index + 1; i < size; i++)
	// {
	// 	sum += numbers[i];
	// }

	// std::cout << "Sum: " << sum;

	// 7
	// srand(time(0));
	// rand();

	// const int size = 20;
	// int numbers[size];

	// int min = 101;
	// int max = 0;

	// for (int i = 0; i < size; i++)
	// {
	// 	numbers[i] = rand() % 100;

	// 	if (numbers[i] < min)
	// 	{
	// 		min = numbers[i];
	// 	}

	// 	else if (numbers[i] > max)
	// 	{
	// 		max = numbers[i];
	// 	}
	// }

	// std::cout << "Max: " << max << "\n";
	// std::cout << "Min: " << min;

	// 8
	// srand(time(0));
	// rand();

	// const int size = 200;
	// int numbers[size];

	// int count1 = 0;
	// int count2 = 0;
	// int count3 = 0;

	// for (int i = 0; i < size; i++)
	// {
	// 	numbers[i] = rand() % 200;
		
	// 	int count = 0;
	// 	int num = numbers[i];

	// 	while (num != 0)
	// 	{
	// 		num /= 10;
	// 		count++;
	// 	}

	// 	switch (count)
	// 	{
	// 		case 1:
	// 			count1++;
	// 			break;

	// 		case 2:
	// 			count2++;
	// 			break;

	// 		case 3:
	// 			count3++;
	// 			break;
	// 	}
	// }

	// std::cout << "1: " << (float)count1 / size * 100 << "%\n";
	// std::cout << "2: " << (float)count2 / size * 100 << "%\n";
	// std::cout << "3: " << (float)count3 / size * 100 << "%\n";

	// 9
	// srand(time(0));
	// rand();

	// const int size = 10;
	// int numbers[size];

	// std::cout << "Before: ";

	// for (int i = 0; i < size; i++)
	// {
	// 	numbers[i] = rand() % 10;
	// 	std::cout << numbers[i] << " ";
 	// }

	// std::cout << "\n";

	// for (int i = 0; i < size / 2; i++)
	// {
	// 	int temp = numbers[i];
	// 	numbers[i] = numbers[size - i - 1];
	// 	numbers[size - i - 1] = temp;
	// }

	// std::cout << "\nAfter: ";

	// for (int i = 0; i < size; i++)
	// {
	// 	std::cout << numbers[i] << " ";
	// }

	// 10
	// srand(time(0));
	// rand();

	// const int size1 = 5;
	// const int size2 = 10;

	// int A[size1];
	// int B[size1];
	// int C[size2];

	// for (int i = 0; i < size1; i++)
	// {
	// 	A[i] = rand() % 100;
	// 	B[i] = rand() % 100;
	// }

	// int indexC = 0;
	// for (int i = 0; i < size1; i++)
	// {
	// 	C[indexC] = A[i];
	// 	indexC++;
	// 	C[indexC] = B[i];
	// 	indexC++;
	// }

	// std::cout << "C: ";

	// for (int num : C)
	// {
	// 	std::cout << num << " ";
	// }
}