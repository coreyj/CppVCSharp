#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("%s", Do());

	PointersAreNormal();
	DynamicMemory();

	PrintArray();

	PrintHalfPyramid(5);
	PrintHalfPyramid(10);
}

char* Do()
{
	return "I'm so lonely.";
}

void PointersAreNormal()
{
	int x = 1;
	int y = 2;

	printf("Before swap:\n");
	printf("x = %i\n", x);
	printf("y = %i\n", y);

	swap(&x, &y);

	printf("After swap:\n");
	printf("x = %i\n", x);
	printf("y = %i\n", y);
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void DynamicMemory()
{
	srand((unsigned)time(0));
	int size = 0;

	printf("How many random numbers do you want?\n");
	scanf("%d", &size);

	int* arr = (int*) malloc(size);

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}

	printf("Your random numbers:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
	}

	free(arr);
}

void PrintArray()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (int i = 0; i < 9; i++)
	{
		printf("%i\n", arr[i]);
	}
}

void PrintHalfPyramid(int height)
{
	for (int row = 0; row < height; row++)
	{
		for (int column = 0; column <= row; column++)
		{
			printf("#");
		}

		printf("\n");
	}
}