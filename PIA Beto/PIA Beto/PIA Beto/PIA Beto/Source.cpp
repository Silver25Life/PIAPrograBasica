#include<iostream>
#include<wchar.h>
#include<locale.h>
#include<string>
using namespace std;
string name[4], clasif[4], caract[4], desc[4], gen[4];
int ID[4], year[4];
float price[4], tax = 0.16, total[4];


void agregar() {
	for (int i = 1; i < 4; i++) {
		ID[i] = i;
		cout << "Escriba el nombre del juego n�mero " << i << ": ";
		cin.ignore();
		getline(cin, name[i]);
		cout << "Escriba el a�o de salida: ";
		cin >> year[i];
		cin.ignore();
		cout << "Escriba la clasificaci�n del juego: ";
		getline(cin, clasif[i]);
		cout << "Escriba las car�cteristicas del juego: ";
		getline(cin, caract[i]);
		cout << "Escriba la descripci�n del juego: ";
		getline(cin, desc[i]);
		cout << "Escriba el genero del juego: ";
		getline(cin, gen[i]);
		cout << "Escriba el precio del juego: ";
		cin >> price[i];
		total[i] = price[i] * tax + price[i];
		cout << "El impuesto es del 16%, entonces el precio total es de: $" << total1 << ", con un impuesto del: $" << total1 - price1 << endl;
	}
}

void lista() {
	cout << "\t\tNombre\t" << "A�o\t" << "Clasificaci�n\t" << "Car�cteristicas\t\t\t\t" << "Descripci�n\t\t\t\t" << "Genero\t" << "Precio\t" << "Impuesto\t" << "Presio total" << endl;
	for (int i = 1; i < 4; i++) {
		cout << "\t\t" << name[i] << "\t" << year[i] << "\t" << clasif[i] << "\t" << caract[i] << "\t" << desc[i] << "\t" << gen[i] << "\t";
		cout << price[i] << "\t" << total[i] - price[i] << "\t" << total[i] << endl;
	}
}

void main() {
	setlocale(LC_ALL, "");
	while (true) {
		cout << "\n\t========== Men� ==========" << endl;
		cout << "\t1. Agregar art�culo." << endl;
		cout << "\t2. Modificar art�culo." << endl;
		cout << "\t3. Eliminar art�culo." << endl;
		cout << "\t4. Mostrar articulos." << endl;	//Debe de mostrar la Lista de art�culos vigentes con opci�n a genero, clasificaci�n.
		cout << "\t5. Limpiar pantalla." << endl;
		cout << "\t6. Salir." << endl;
		cout << "\t= = = Elija una de las opciones anteriores y presione enter por favor = = =" << endl;
		cin >> op;

		switch (op) {
		case 1:
			agregar();
			break;
		case 2:
			cout << "Aun en construcci�n" << endl;
			break;
		case 3:
			cout << "Aun en construcci�n" << endl;
			break;
		case 4:
			lista();
			break;
		case 5:
			system("cls");
			break;
		case 6:
			cout << "Saliendo del programa, favor de presionar cualquier tecla...";
			exit(0);
		default:
			cout << "Favor de elegir una de las anteriores opciones.";
		}
	}

}