#include<iostream>
#include<wchar.h>
#include<locale.h>
using namespace std;
bool h=true;
int op, id, year1,year2,year3,j=1;
float price1,price2,price3, tax=0.16, total1, total2, total3;
char name1[20],name2[20],name3[20], clas1[20],clas2[20],clas3[20], charact1[20],charact2[20],charact3[20], descrp1[100],descrp2[100],descrp3[100], gen1[20], gen2[20], gen3[20];
void regresar();
int main(){	
	setlocale(LC_ALL, "");
	cout << "\n\t = = = Menu = = =" << endl;
	cout << "\t 1. Agregar Articulo" << endl;
	cout << "\t 2. Modificar Articulo" << endl;
	cout << "\t 3. Eliminar Articulo" << endl;
	cout << "\t 4. Lista de articulos vigentes" << endl;
	cout << "\t 5. Limpiar pantalla" << endl;
	cout << "\t 6.Salir" << endl;
	cout << "\t\n= = = Elija una de las opciones anteriores y presione enter porfavor = = =" << endl;

	cin >> op;
	switch (op)
	{
	case 1:	//Agregar Articulo listo
		if(j<4){
			switch(j){
				case 1:
				cout << "\n\t Ingrese el nombre del juego: ";
				cin >> name1;
				cout << "\n\t Ingrese el año del juego: ";
				cin >> year1;
				cout << "\n\t Ingrese la clasificacion del juego: ";
				cin >> clas1;
				cout << "\n\t Ingrese la descripcion del juego: ";
				cin >> descrp1;
				cout << "\n\t Ingrese el genero del juego: ";
				cin >> gen1;
				cout << "\n\t Ingrese el precio del juego: ";
				cin >> price1;
				total1=price1*0.16+price1;
				cout << "\n\t El impuesto es del 16%, así que el total es de: " << total1 << endl;
				system("pause>null");
				j++;
				regresar();
				break;
				
				case 2:
				cout << "\n\t Ingrese el nombre del juego: ";
				cin >> name2;
				cout << "\n\t Ingrese el año del juego: ";
				cin >> year2;
				cout << "\n\t Ingrese la clasificacion del juego: ";
				cin >> clas2;
				cout << "\n\t Ingrese la descripcion del juego: ";
				cin >> descrp2;
				cout << "\n\t Ingrese el genero del juego: ";
				cin >> gen2;
				cout << "\n\t Ingrese el precio del juego: ";
				cin >> price2;
				total2=price2*0.16+price2;
				cout << "\n\t El impuesto es del 16%, así que el total es de: " << total2 << endl;
				system("pause>null");
				j++;
				regresar();
				break;
				case 3:
				cout << "\n\t Ingrese el nombre del juego: ";
				cin >> name3;
				cout << "\n\t Ingrese el año del juego: ";
				cin >> year3;
				cout << "\n\t Ingrese la clasificacion del juego: ";
				cin >> clas3;
				cout << "\n\t Ingrese la descripcion del juego: ";
				cin >> descrp3;
				cout << "\n\t Ingrese el genero del juego: ";
				cin >> gen3;
				cout << "\n\t Ingrese el precio del juego: ";
				cin >> price3;
				total3=price3*0.16+price3;
				cout << "\n\t El impuesto es del 16%, así que el total es de: " << total3 << endl;
				system("pause>null");
				j++;
				regresar();
				break;
		}
		}else{
			cout <<"\t Ya hay 3 juegos, favor de eliminar o modificar uno de ellos";
			regresar();
		}
		
	case 2:	//Modificar Articulo WIP
		cout << "aun esta en construccion" << endl;
		system("pause>null");
		exit(0);
		break;
		
	case 3:	//Eliminar Articulo WIP
		cout << "aun esta en construccion" << endl;
		system("pause>null");
		exit(0);
		break;

	case 4: //Lista de Articulos WIP
		cout << "aun esta en construccion" << endl;
		system("pause>null");
		exit(0);
		break;

	case 5://Limpiar Pantalla listo
		system("cls");
		regresar();
		break;
		
	case 6:
		cout << "Saliendo, presione cualquier tecla por favor." << endl;
		exit(0);
	}
	
	
	return 0;
}

void regresar(){
	main();
}
