#include <iostream> // Es lo mejor que pude hacer :'v
#include <ctime> // Para poder usar el srand time Null http://www.mrroberts.com/MathBits/CompSci/LibraryFunc/rand.htm
using namespace std;

const int vBla = 5; //Tamaño Columna Vertical 
const int hBla = 5; //Tamaño Columna Horizontal
int maxblas = 10; //Barcos en juego
int matriz[vBla][hBla]; //Matriz

void mBla()  //Esta funcion es para crear la Matriz //Aqui seran los posibles espacios para un barco
{
	for (int a = 0; a < vBla; a++)
	{
		for (int b = 0; b < hBla; b++)
		{
			matriz[a][b] = 0;
		}
	}
}

void pmBla() //Esta funcion es para imprimir la matriz (PrintMatriz) // 
{
	for (int a = 0; a < vBla; a++)
	{
		for (int b = 0; b < hBla; b++)
		{
			cout << matriz[a][b] << " ";
		}
		cout << endl;
	}
}

int nBlas() //Esta funcion cuenta cuantos barcos quedan "vivos".
{
	int c = 0;

	for (int a = 0; a < vBla; a++)
	{
		for (int b = 0; b < hBla; b++)
		{
			if (matriz[a][b] == 1)
				c++;
		}
	}
	return c;
}

void pBlas() //Aqui es para crear barcos en locaciones random hasta que se confirme que ¨s¨ es igual al ¨Maxblas¨
{
	int  s = 0;
	while (s < maxblas)
	{
		int x = rand() % vBla;
		int y = rand() % hBla;
		if (matriz[x][y] != 1)
		{
			s++;
			matriz[x][y] = 1; //Cambia a 1 en la posicion en la matriz 
		}
	}
}

bool aBlas(int x, int y) //Aqui es para cambiar el valor 1(que significa que existe un barco en esa posicion).
{
	if (matriz[x][y] == 1)
	{
		matriz[x][y] = 2; //Al valor 2 para saber a que barco si le pudiste dar.
		return true; 
	}
	return false;
}

int main()
{             //Este sirve para que el programa utilice el reloj interno de la computadora, para asi controlar que la secuencia de numeros 
	srand(time(NULL)); // randoms sea siempre una distinta. // Para evitar la repeticion de secuencias entre ejecuciones. 
	mBla();
	pBlas();
	int pos1, pos2;
	char ble;
	while (1) //Este while para que el jugador pueda escoger las posiciones a donde quiere disparar para tratar de darle un barco. 
	{
		cout << "Ingresa una Posicion: (#/#)"; cin >> pos1 >> pos2; //Ingresas 2 posiciones con numeros decimales para atacar esa posicion.
		if (aBlas(pos1, pos2)) //Con la funcion de ataque y las posiciones establecidas por el jugador, ejecuta la funcion de ataque. 
			cout << "Destruiste un barco!" << endl; //Confirma que le diste a un barco.
		else
			cout << "No hay ningun barco en esa locacion!" << endl; //No le diste. 
		cout << "Numeros de Barcos: " << nBlas() << endl; //Te informa cuantos barcos quedan en pie, le hayas dado o no. 
		cout << "Quieres volver a intentarlo? (s/n)"; cin >> ble; //Aqui es para rendirte o seguir jugando, si lo haces terminara el juego.
		if (ble == 'n')
			break;
	}
	cout << "Juego Terminado!" << endl;
	pmBla(); //Para por ultimo mostrarte el tablero, podras ver las posiciones de los barcos y las posiciones en donde allas acertado.

	system("pause");
	return 0;
}