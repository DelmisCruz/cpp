#include <iostream>
#include<string>

using namespace std;

string productos[5][3]={
	{"001", "iPhone X", "0"},
	{"002", "Laptop Dell", "5"},
	{"003", "Monitor Sansung", "2"},
	{"004", "Mouse", "100"},
	{"005", "HeadSet", "25"}
};

void listarProductos(){
		system("cls");
		cout<<endl;
		cout<<"Listador de Productos"<<endl;
		cout<<"*********************"<<endl;
		cout<<"Codigo, Descripcion, Existencia"<<endl;
			
			for(int i = 0; i<5; i++)
			{
				cout<< productos[i][0] <<" "<< productos[i][1]  << " " << productos[i][2]<<endl;
			}
	
}

void movimientoInventario(string codigo, int cantidad, string tipoMovimiento){
	for(int i =0; i < 5; i++)
	{
		if(productos[i][0]==codigo){					
			if(tipoMovimiento == "+"){
				productos[i][2] = stoi(productos[i][2]) + cantidad;
			}else{
				productos[i][2] = stoi(productos[i][2] ) - cantidad;
		
			}
			
		}
	}
	
}

void ingresoDeInventario(){
		string codigo = "";
		int cantidad = 0;
	
		system("cls");
		cout<<endl;
		cout<<"Ingreso de Productos al Inventario"<<endl;
		cout<<"**********************************"<<endl;
		cout<<"Ingrese el codigo del producto: ";
		cin>>codigo;
		cout<<endl;
		cout<<"Ingrse la Cantidad del Producto: ";
		cin>>cantidad;
		cout<<endl;
		
		movimientoInventario(codigo, cantidad, "+");
}

int main(int argc, char** argv) {
	
	int opcion = 0;
	
	while(true){
		system ("cls");
		
		cout<<"Sistema de Inventario ";
		cout<<endl;
		cout<<"*********************"; 
		cout<<endl;
		cout<<endl;
		cout<<"1- Productos"<<endl;
		cout<<"2- Ingreso de Inventario"<<endl;
		cout<<"3- Productos"<<endl;
		cout<<"0- Salida de Inventario"<<endl;
		
		cout<<"Ingrese una opcion del menu: ";
		cin>>opcion; 
	
		switch (opcion){
		case 1:
			listarProductos;
			break;
			cout<<"Escogiste 1";
			break;
		case 2:
			ingresoDeInventario();
			break;
		case 3:
			cout<<"Escogiste 3";
			break;
		
		default:
			break;
	}
	
	system("pause");
	cout<<endl;
	
	if (opcion==0){
		break;
	}
		
	}
	
	return 0;
}