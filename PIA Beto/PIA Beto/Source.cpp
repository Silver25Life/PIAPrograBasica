#include<iostream>
#include<wchar.h>
#include<locale.h>
#include<string>
#include<conio.h>
using namespace std;
int op, i, j = 0;
bool val = true, val2 = true, val3 = true;
struct videojuego {
	int unsigned ID, year;
	string name, clasif, caract, desc, gen;
	float price, total, taxf;
}juego[100];
void agregar() {
	while (val && j != 101) {
		juego[j].ID = j + 1;
		cout << "\tEscriba el nombre del juego número " << j + 1 << ": ";
		cin.ignore();
		getline(cin, juego[j].name);
		cout << "\tEscriba el año de salida: ";
		cin >> juego[j].year;
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
		cin >> juego[j].price;
		juego[j].taxf = juego[j].price * 0.16;
		juego[j].total = juego[j].taxf + juego[j].price;
		cout << "\tEl impuesto es del 16%, entonces el precio total es de: $" << juego[j].total << ", con un impuesto del: $" << juego[j].taxf << endl;
		j++;
		while (val2) {
			cout << "\n\n\t ¿Le gustaria agregar otro juego?\n\t 1.Si\n\t 2.No\n\t";
			cin >> op;
			switch (op) {
			case 1:
				val2 = false;
				break;
			case 2:
				val = false;
				val2 = false;
				break;
			default:
				cout << "\n\t Por favor, elija una opcion valida.";
			}
		}
		val2 = true;
	}
	if (val != false) {
		cout << "\n\n\t Ya esta llena la lista de juegos" << endl;
	}
}

void modificar() {
	int unsigned ID, h;
	bool valex = false;
	while (val) {
		cout << "\t\tFavor de ingresar el ID del juego que busca: ";
		cin >> ID;
		for (int i = 0; i < j; i++) {
			if (juego[i].ID == ID) {
				valex = true;
				h = i;
			}
		}
		if (valex == true) {
			cout << "\t\tID\tNombre\tAño\tClasificación\tCarácteristicas\t\t\t\tDescripción\t\t\t\tGenero\tPrecio\tImpuesto\tPrecio Total" << endl;
			cout << "\t\t" << juego[h].ID << "\t\t" << juego[h].name << "\t" << juego[h].year << "\t" << juego[h].clasif << "\t" << juego[h].caract << "\t" << juego[h].desc << "\t" << juego[h].gen << "\t";
			cout << juego[h].price << "\t" << juego[h].taxf << "\t" << juego[h].total << endl;
			while (val2) {
				cout << "\n\t¿Este es el juego que quiere modificar?\n\t1.Si\n\t2.No\n\t";
				cin >> op;
				switch (op) {
				case 1:
					cout << "\tEscriba el nombre del juego número " << h + 1 << ": ";
					cin.ignore();
					getline(cin, juego[h].name);
					cout << "\tEscriba el año de salida: ";
					cin >> juego[h].year;
					cin.ignore();
					cout << "\tEscriba la clasificación del juego: ";
					getline(cin, juego[h].clasif);
					cout << "\tEscriba las carácteristicas del juego: ";
					getline(cin, juego[h].caract);
					cout << "\tEscriba la descripción del juego: ";
					getline(cin, juego[h].desc);
					cout << "\tEscriba el genero del juego: ";
					getline(cin, juego[h].gen);
					cout << "\tEscriba el precio del juego: ";
					cin >> juego[h].price;
					juego[h].taxf = juego[h].price * 0.16;
					juego[h].total = juego[h].taxf + juego[h].price;
					cout << "\tEl impuesto es del 16%, entonces el precio total es de: $" << juego[h].total << ", con un impuesto del: $" << juego[h].taxf << endl;
					while (val3) {
						cout << "\n\t¿Le gustaria modificar otro juego?\n\t1.Si\n\t2.No\n\t";
						cin >> op;
						switch (op) {
						case 1:
							val2 = false;
							val3 = false;
							break;
						case 2:
							val = false;
							val2 = false;
							val3 = false;
							break;
						default:
							cout << "\n\t Favor de elegir una opcion valida.";
						}
					}
					val3 = true;
					break;
				case 2:
					val2 = false;
					break;
				default:
					cout << "\n\tFavor de elegir una opcion valida";
					break;
				}
			}
			val2 = true;
		}
		if (valex == false) {
			cout << "\n\t\tNo se encontro esa ID, favor de revisar el listado.";
			val = false;
		}
	}
}

void eliminar() {
	int unsigned ID, h;
	bool valex = false;
	while (val) {
		cout << "\t\tFavor de ingresar el ID del juego que busca: ";
		cin >> ID;
		for (int i = 0; i < j; i++) {
			if (juego[i].ID == ID) {
				valex = true;
				h = i;
			}
		}
		if (valex == true) {
			cout << "\t\tID\tNombre\tAño\tClasificación\tCarácteristicas\t\t\t\tDescripción\t\t\t\tGenero\tPrecio\tImpuesto\tPrecio Total" << endl;
			cout << "\t\t" << juego[h].ID << "\t\t" << juego[h].name << "\t" << juego[h].year << "\t" << juego[h].clasif << "\t" << juego[h].caract << "\t" << juego[h].desc << "\t" << juego[h].gen << "\t";
			cout << juego[h].price << "\t" << juego[h].taxf << "\t" << juego[h].total << endl;
			while (val2) {
				cout << "\n\t¿Este es el juego que quiere eliminar?\n\t1.Si\n\t2.No\n\t";
				cin >> op;
				switch (op) {
				case 1:
					for (int i = h; i < j; i++) {
						juego[h].caract = juego[h + 1].caract;
						juego[h].clasif = juego[h + 1].clasif;
						juego[h].desc = juego[h + 1].desc;
						juego[h].desc = juego[h + 1].desc;
						juego[h].gen = juego[h + 1].gen;
						juego[h].name = juego[h + 1].name;
						juego[h].price = juego[h + 1].price;
						juego[h].taxf = juego[h + 1].taxf;
						juego[h].total = juego[h + 1].total;
						juego[h].year = juego[h + 1].year;
						cout << "\n\t Juego eliminado con exito";
					}
					juego[j - 1].ID = 0;
					j--;
					val = false;
					val2 = false;
					break;
				case 2:
					val2 = false;
					break;
				default:
					cout << "\n\tFavor de elegir una opcion valida";
					break;
				}
			}
			val2 = true;
		}
		if (valex == false) {
			cout << "\n\t\tNo se encontro esa ID, favor de revisar el listado.";
			val = false;
		}
	}
}

void lista() {
	cout << "\t\tID\tNombre\tAño\tClasificación\tCarácteristicas\t\t\t\tDescripción\t\t\t\tGenero\tPrecio\tImpuesto\tprecio total" << endl;
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
		cout << "\t= = = Elija una de las opciones anteriores y presione enter por favor = = =\n\t\t";
		cin >> op;

		switch (op) {
		case 1:
			agregar();
			val = true;
			break;
		case 2:
			modificar();
			val = true;
			break;
		case 3:
			eliminar();
			val = true;
			break;
		case 4:
			lista();
			break;
		case 5:
			system("cls");
			break;
		case 6:
			cout << "Saliendo del programa, favor de presionar cualquier tecla...";
			val = false;
			break;
		default:
			cout << "Favor de elegir una de las anteriores opciones.";
			break;
		}
	}

}