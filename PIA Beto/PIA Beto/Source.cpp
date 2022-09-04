#include<iostream>
#include<wchar.h>
#include<locale.h>
using namespace std;
bool h=false;
char name1[40],name2[40],name3[40], clas1[20],clas2[20],clas3[20], charact1[20],charact2[20],charact3[20], descrp1[100],descrp2[100],descrp3[100], gen1[20], gen2[20], gen3[20];
int op=0,op2=0, id[4],id1=1,id2=2,id3=3, year[4],year1, year2,year3, j=1;
float price[4],price1,price2,price3, tax=0.16, total[4],total1, total2, total3;
string name[4], clas[4],charact[4],descrp[4],gen[4];

void regresar();

int main(){
	setlocale(LC_ALL, "");
	name[1]="Minecraft";
	clas[1]="Para todo publico";
	charact[1]="Construye";
	descrp[1]="Construir y sobrevivir";
	gen[1]="Sandbox";
	year[1]=2010;
	price[1]=1000;
//====================================================
	name[2]="Halo: Combat Evolved";
	clas[2]="Adolecentes y mas";
	charact[2]="Espacio";
	descrp[2]="Matas a aliens y ganas";
	gen[2]="Shooter";
	year[2]=2000;
	price[2]=800;
//====================================================
	name[3]="Super Smash Bros";
	clas[3]="Adolecentes y mas";
	charact[3]="Peleas contra todos";
	descrp[3]="El ultimo en quedar en pie gana";
	gen[3]="Fighting";
	year[3]=1999;
	price[3]=600;
//====================================================
	for(int i=1; i<4;i++){
		id[i]=i;
		total[i]=price[i]*tax + price[i];
	}
	
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
				h=true;
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
	break;
	
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

	case 4: //Lista de Articulos listo
		cout << "=================================================================================";
		cout << "\n\t ID \t" << "Nombre\t\t" << "Clasificación\t\t" << "Caracteristicas\t\t\t"<< "Descripción\t\t\t" << "Genero(s)\t" << "Precio\t" << "Total\t"<<endl;
		if(h==false){
			for(int i=1;i<4;i++){
					cout << "\t"<< id[i] << "\t" <<name[i] << "\t" << clas[i] << "\t" << charact[i] << "\t" << descrp[i] << "\t" << gen[i] << "\t" << price[i] << "\t" << "\t" << total[i] << endl;
			}
		}else{
			cout << "\t"<< id1 << "\t" <<name1 << "\t" << clas1 << "\t" << charact1 << "\t" << descrp1 << "\t" << gen1 << "\t" << price1 << "\t" << "\t" << total1 << endl;
			cout << "\t"<< id2 << "\t" <<name2 << "\t" << clas2 << "\t" << charact2 << "\t" << descrp2 << "\t" << gen2 << "\t" << price2 << "\t" << "\t" << total2 << endl;
			cout << "\t"<< id3 << "\t" <<name3 << "\t" << clas3 << "\t" << charact3 << "\t" << descrp3 << "\t" << gen3 << "\t" << price3 << "\t" << "\t" << total3 << endl;
		}
		cout << "================================================================================="<< endl;
		system("pause>null");
		regresar();
		break;

	case 5://Limpiar Pantalla listo
		system("cls");
		regresar();
		break;
		
	case 6:
		cout << "Saliendo, presione cualquier tecla por favor." << endl;
		exit(0);
	default:
		system("cls");
		cout << "Favor de elegir una opción entre 1 y 6" << endl;
		regresar();
		break;
	}
	return 0;
}

void regresar(){
	main();
}
