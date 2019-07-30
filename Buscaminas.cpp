#include <iostream>
#include <ctime>
using namespace std;

const int vertical = 5;
const int horizontal = 5;
int mines = 10; 
int matrix[vertical][horizontal]

void matrix()
{
	for (int i = 0; a < vertical; i++)
	{
		for (int j = 0; j < horizontal; j++)
		{
			matrix[i][j] = 0
		}
	}
}

void Show()
{
	for (int i = 0; i < vertical; i++)
	{
		for (int j = 0; j < horizontal; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void mine()
{
	int m = 0;
	while (m < mines)
	{
		int x = rand() % vertical;
		int y = rand() % horizontal;
		if (matrix[x][y] != 1)
		{
			m++
			matrix[x][y] = 1;
		}
	}
}

bool empty(int x, int y)
{
	if (matrix[x][y] == 0)
	{
		matrix[x][y] == #;
		return true;
	}
	return false; 
}

bool mineselect(int x, int y)
{
	if (matrix[x][y] == 0)
	{
		matrix[x][y] == #;
		return true;
	}
	return false;
}

bool bandera(int x, int y)
{
	if (matrix[x][y] == 0)
	{
		matrix[x][y] == #;
		return true; 
	}
	return false;
}

int main()
{
	srand(time(NULL));
	int pos1, pos2;
	char something;

	while (1)
	{
		Show();
		cout << "Selecciona una coordenada: (#/#)"; cin >> pos1 >> pos2;
		if (empty(pos1, pos2))
			Show();
		else 

    }
	cout << "Game Over" << endl; 
}
