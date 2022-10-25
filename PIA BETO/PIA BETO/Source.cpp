#include<iostream>
#include<wchar.h>
#include<locale.h>
#include<string>
#include<conio.h>
using namespace std;
bool val = true;
char op[1];
int i, j = 0;
char a = 0;
struct videojuego{
	char yearc[4], pricec[9];
	int unsigned ID, year;
	string name, clasif, caract, desc, gen;
	float price, total, taxf;
}juego[100];
void agregar() {
	bool votro = true, nuevo = true;
	while (nuevo && j != 101) {
		juego[j].ID = j+1;
		cout << "\n\tEscriba el nombre del juego número " << j+1 << ": ";
		cin.ignore();
		getline(cin, juego[j].name);
		cout << "\tEscriba el año de salida: ";
		cin >> juego[j].yearc;
		for (int i = 0; i < 4; i++) {
			if (juego[j].yearc[i] == 0) {
				i = 4;
			}
			else if (juego[j].yearc[i] < 48 || juego[j].yearc[i] > 57) {
				for (int k = 0; k < 9; k++) {
					juego[j].yearc[k] = 0;
				}
				cout << "\n\t Favor de escribir un año valido sin letras ni espacios, el año solo puede ser de 4 digitos: ";
				cin >> juego[j].yearc;
				i = -1;
			}
		}
		juego[j].year = atoi(juego[j].yearc);
		cin.ignore();
		cout << "\tEscriba la clasificación del juego: ";
		getline(cin, juego[j].clasif);
		cout << "\tEscriba las carácteristicas del juego: ";
		getline(cin, juego[j].caract);
		cout << "\tEscriba la descripción del juego: ";
		getline(cin, juego[j].desc);
		cout << "\tEscriba el genero del juego: ";
		getline(cin, juego[j].gen);
		cout << "\tEscriba el precio del juego: ";
		cin >> juego[j].pricec;
		for (int i = 0; i < 9; i++) {
			if (juego[j].pricec[i] == 0) {
				i = 9;
			}else if (juego[j].pricec[i] != 46 &&(juego[j].pricec[i] < 48 || juego[j].pricec[i] > 57)) {
				for (int k = 0; k < 9; k++) {
					juego[j].pricec[k] = 0;
				}
				cout << "\n\t Favor de escribir un precio valido sin letras ni espacios, el precio solo puede ser de 8 digitos y un punto: ";
				cin >> juego[j].pricec;
				i = -1;
			}
		}
		juego[j].price= atof(juego[j].pricec);
		juego[j].taxf = juego[j].price * 0.16;
		juego[j].total = juego[j].taxf + juego[j].price;
		cout << "\tEl impuesto es del 16%, entonces el precio total es de: $" << juego[j].total << ", con un impuesto del: $" << juego[j].taxf << endl;
		j++;
		while (votro) {
			cout << "\n\n\t ¿Le gustaria agregar otro juego?\n\t 1.Si\n\t 2.No\n\t";
			op[0] = _getche();
			if (op[0] < 49 || op[0]>50) {
				cout << "\n\t Por favor, elija una opcion valida.";
			}
			else {
				switch (op[0]) {
				case '1':
					votro = false;
					break;
				case '2':
					nuevo = false;
					votro = false;
					break;
				}
			}
		}
		votro = true;
	}
	if (j>100) {
		cout << "\n\n\t Ya esta llena la lista de juegos" << endl;
	}
}

void modificar() {
	bool mod = true, vID = false, vmod = true, omod = true;
	int unsigned ID;
	while (mod) {
		cout << "\n\tFavor de ingresar el ID del juego que busque modificar y presione Enter: ";
		cin >> ID;
		for (int i = 0; i < j; i++) {
			if (juego[i].ID == ID) {
				vID = true;
				i = j;
			}
		}
		if (vID == false) {
			cout << "\n\t\tNo se encontro esa ID, favor de revisar el listado.";
			mod = false;
		}
		else if (vID == true) {
			vID = false;
			cout << "\t\tID\tNombre\tAño\tClasificación\tCarácteristicas\t\t\t\tDescripción\t\t\t\tGenero\tPrecio\tImpuesto\tPrecio Total" << endl;
			cout << "\t\t" << juego[ID-1].ID << "\t\t" << juego[ID-1].name << "\t" << juego[ID-1].year << "\t" << juego[ID-1].clasif << "\t" << juego[ID-1].caract << "\t" << juego[ID-1].desc << "\t" << juego[ID-1].gen << "\t";
			cout << juego[ID-1].price << "\t" << juego[ID-1].taxf << "\t" << juego[ID-1].total << endl;
			while (vmod) {
				cout << "\n\t¿Este es el juego que quiere modificar?\n\t1.Si\n\t2.No\n\t";
				op[0] = _getche();
				if (op[0] < 49 || op[0]>50) {
					cout << "\n\tFavor de elegir una opcion valida";
				}
				else {
					vmod = false;
				}
			}
			switch (op[0]) {
			case '1':
				cout << "\tEscriba el nombre del juego número " << ID << ": ";
				cin.ignore();
				getline(cin, juego[ID - 1].name);
				cout << "\tEscriba el año de salida: ";
				cin >> juego[ID - 1].yearc;
				for (int i = 0; i < 4; i++) {
					if (juego[ID - 1].yearc[i] == 0) {
						i = 4;
					}
					else if (juego[ID - 1].yearc[i] < 48 || juego[ID - 1].yearc[i] > 57) {
						for (int k = 0; k < 4; k++) {
							juego[ID - 1].yearc[k] = 0;
						}
						cout << "\n\t Favor de escribir un año valido sin letras ni espacios, el año solo puede ser de 4 digitos: ";
						cin >> juego[ID - 1].yearc;
						i = -1;
					}
				}
				juego[j].year = atoi(juego[ID - 1].yearc);
				cin.ignore();
				cout << "\tEscriba la clasificación del juego: ";
				getline(cin, juego[ID - 1].clasif);
				cout << "\tEscriba las carácteristicas del juego: ";
				getline(cin, juego[ID - 1].caract);
				cout << "\tEscriba la descripción del juego: ";
				getline(cin, juego[ID - 1].desc);
				cout << "\tEscriba el genero del juego: ";
				getline(cin, juego[ID - 1].gen);
				cout << "\tEscriba el precio del juego: ";
				cin >> juego[ID - 1].pricec;
				for (int i = 0; i < 9; i++) {
					if (juego[ID - 1].pricec[i] == 0) {
						i = 9;
					}
					else if (juego[ID - 1].pricec[i] != 46 && (juego[ID - 1].pricec[i] < 48 || juego[ID - 1].pricec[i] > 57)) {
						for (int k = 0; k < 9; k++) {
							juego[ID - 1].pricec[k] = 0;
						}
						cout << "\n\t Favor de escribir un precio valido sin letras ni espacios, el precio solo puede ser de 8 digitos y un punto: ";
						cin >> juego[ID - 1].pricec;
						i = -1;
					}
				}
				juego[ID - 1].price = atof(juego[ID - 1].pricec);
				juego[ID - 1].taxf = juego[ID - 1].price * 0.16;
				juego[ID - 1].total = juego[ID - 1].taxf + juego[ID - 1].price;
				cout << "\tEl impuesto es del 16%, entonces el precio total es de: $" << juego[ID - 1].total << ", con un impuesto del: $" << juego[ID - 1].taxf << endl;
				while (omod) {
					cout << "\n\t¿Le gustaria modificar otro juego?\n\t1.Si\n\t2.No\n\t";
					op[0] = _getche();
					if (op[0] < 49 || op[0]>50) {
						cout << "\n\t Favor de elegir una opcion valida.";
					}
					else {
						omod = false;
					}
				}
				omod = true;
				if (op[0] = '2') {
					mod = false;
				}
				break;
			case '2':
				mod = false;
				break;
			}
		}
	}
}

void eliminar() {
	bool del = true, vID = false, vdel = true;
	int unsigned ID, h;
	bool valex = false;
	while (del) {
		cout << "\n\tFavor de ingresar el ID del juego que quiera eliminar y presione Enter: ";
		cin >> ID;
		for (int i = 0; i < j; i++) {
			if (juego[i].ID == ID) {
				vID = true;
			}
		}
		if (vID == false) {
			cout << "\n\t\tNo se encontro esa ID, favor de revisar el listado.\n";
			del = false;
		}
		else if (vID == true) {
			vID = false;
			cout << "\t\tID\tNombre\tAño\tClasificación\tCarácteristicas\t\t\t\tDescripción\t\t\t\tGenero\tPrecio\tImpuesto\tPrecio Total" << endl;
			cout << "\t\t" << juego[ID - 1].ID << "\t\t" << juego[ID - 1].name << "\t" << juego[ID - 1].year << "\t" << juego[ID - 1].clasif << "\t" << juego[ID - 1].caract << "\t" << juego[ID - 1].desc << "\t" << juego[ID - 1].gen << "\t";
			cout << juego[ID - 1].price << "\t" << juego[ID - 1].taxf << "\t" << juego[ID - 1].total << endl;
			while (vdel) {
				cout << "\n\t¿Este es el juego que quiere eliminar?\n\t1.Si\n\t2.No\n\t";
				op[0] = _getche();
				if (op[0] < 49 || op[0]>50) {
					cout << "\n\tFavor de elegir una opcion valida\n";
				}
				else {
					vdel = false;
				}
			}
			vdel = true;
			if (op[0] == '1') {
				for (int i = ID - 1; i < j; i++) {
					juego[i].caract = juego[i + 1].caract;
					juego[i].clasif = juego[i + 1].clasif;
					juego[i].desc = juego[i + 1].desc;
					juego[i].desc = juego[i + 1].desc;
					juego[i].gen = juego[i + 1].gen;
					juego[i].name = juego[i + 1].name;
					juego[i].price = juego[i + 1].price;
					juego[i].taxf = juego[i + 1].taxf;
					juego[i].total = juego[i + 1].total;
					juego[i].year = juego[i + 1].year;
				}
				cout << "\n\t Juego eliminado con exito\n";
				juego[j - 1].ID = 0;
				j--;
			}
			del = false;
		}
	}
}

void lista() {
	cout << "\n\t\tID\tNombre\tAño\tClasificación\tCarácteristicas\t\t\t\tDescripción\t\t\t\tGenero\tPrecio\tImpuesto\tprecio total" << endl;
	for (int i = 0; i < j; i++) {
		cout << "\t\t" << juego[i].ID << "\t\t" << juego[i].name << "\t" << juego[i].year << "\t" << juego[i].clasif << "\t" << juego[i].caract << "\t" << juego[i].desc << "\t" << juego[i].gen << "\t";
		cout << juego[i].price << "\t" << juego[i].taxf << "\t" << juego[i].total << endl;
	}
}

void main() {
	setlocale(LC_ALL, "");
	while (val) {
		cout << "\n\t========== Menú ==========" << endl;
		cout << "\t1. Agregar artículo." << endl;
		cout << "\t2. Modificar artículo." << endl;
		cout << "\t3. Eliminar artículo." << endl;
		cout << "\t4. Mostrar articulos." << endl;
		cout << "\t5. Limpiar pantalla." << endl;
		cout << "\t6. Salir." << endl;
		cout << "\t= = = Elija una de las opciones anteriores = = =\n\t\t";
		op[0] = _getche();
		if (op[0] < 49 || op[0]>54) {
			cout << "\n\t Favor de elegir una de las anteriores opciones.";
			op[0] = 0;
		}
		else {
			switch (op[0]) {
			case '1':
				agregar();
				val = true;
				break;
			case '2':
				modificar();
				val = true;
				break;
			case '3':
				eliminar();
				val = true;
				break;
			case '4':
				lista();
				break;
			case '5':
				system("cls");
				break;
			case '6':
				cout << "\n\t Saliendo del programa...\n\t";
				val = false;
				break;
			}
		}
	}
	system("pause");

}