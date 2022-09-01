#include<iostream>
using namespace std;
int op; //elije opcion
bool val = false;
char GAME1[10][15], num[3];

int main(){
	cout << "\n\t = = = Menu = = =" << endl;
	cout << "\t 1. Agregar Articulo" << endl;
	cout << "\t 2. Modificar Articulo" << endl;
	cout << "\t 3. Eliminar Articulo" << endl;
	cout << "\t 4. Lista de articulos vigentes" << endl;
	cout << "\t 5. Limpiar pantalla" << endl;
	cout << "\t 6.Salir" << endl;
	cout << "\t\n= = = Elija una de las opciones anteriores porfavor = = =" << endl;

	cin >> op;
	switch (op)
	{
	case 1:
//		GAME1[0]="1";
		cout << "\n\t introduzca nombre: ";
		cin >> GAME1[1];
		cout << "\n" << GAME1[1] << endl;
		system("pause>null");
		break;
	case 2:
		cout << "\n\t introduzca nuevo nombre: ";
		cin >> GAME1[1];
		cout << "\n" << GAME1[0] << GAME1[1] << endl;
		system("pause>null");
		break;
	case 3:
		cout << "\n\t Introduzca numero propio: ";
		cin >> GAME1[0];
		break;

	case 4:
		break;

	case 5:
		system("cls");
		break;
	case 6:
		exit(0);
		
	}
	return 0;
}
	//modificar, eliminar, lista de articulos vigentes, limpiar pantalla, salir
