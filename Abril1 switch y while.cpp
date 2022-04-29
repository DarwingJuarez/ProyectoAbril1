//Cajero con funciones basicas (SWITCH Y WHILE).
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int cantidad=5000;
	int opcion, cantidad_dr;
	do{
	cout<<"****Bienvenido a su cajero automatico***\n";
	cout<<"1-Depositar saldo\n";
	cout<<"2-Retirar saldo\n";
	cout<<"3-Ver estado de cuenta\n";
	cout<<"0-Salir\n";
	cout<<"\nElija una opcion:";cin>>opcion;
	switch(opcion){
		case 1:
			system("cls");
			cout<<"***DEPOSITAR SALDO***\n";
			cout<<"Ingrese cantidad a depositar: ";
			cin>>cantidad_dr;
			cantidad=cantidad+cantidad_dr;
			system("pause");
		break;
		case 2: 
			system("cls");
			cout<<"***RETIRAR SALDO***\n";
			cout<<"Ingrese cantidad a retirar: ";
			cin>>cantidad_dr;
			cantidad=cantidad-cantidad_dr;
			system("pause");
		break;
		case 3:
			system("cls");
			cout<<"***ESTADO DE CUENTA***\n";
			cout<<"Su estado de cuenta actual es el siguiente: Q"<<cantidad;
			cout<<endl;
			system("pause");
		break;
	}
	system("cls");
	}while(opcion!=0);
	
	getch();
	return 0;
}
