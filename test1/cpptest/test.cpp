#include <iostream>
#include <string>
#include <stdlib.h>
#include <limits>
using namespace std;


int main()
{
	int row = 3;
	int col = 5;
	int** matrix = new int* [row];
	for (int r = 0; r < row; r++)
		matrix[r] = new int[col];
	for (int r = 0; r < row; r++)
		for (int c = 0; c < col; c++)
			matrix[r][c] = r * 5 + c;
	for (int r = 0; r < row; r++)
		for (int c = 0; c < col; c++)
			cout << matrix[r][c] << endl;

	return 0;
}