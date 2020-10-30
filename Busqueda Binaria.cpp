#include<iostream>//Libreria importada para utilizar la entrada y salida de datos
#include<conio.h>//Libreria importada para proveer un sistema de E/S por consola

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");//Paquete util para poder escribir libremente en el lenguaje español
	int op,n1,n2,n3,n4,n5,suma=0,rep;//Declaración de las variables
	int inf,sup,mitad,dato,i;
	char band='F';
	int j,aux;
	
	do{
	getch();
	cout<<"\tDame el primer numero:";//Salida de datos o impresíon por consola
    cin>>n1;//Entrada de datos
	cout<<"\tDame el segundo numero:";
	cin>>n2;
	cout<<"\tDame el tercer numero:"; 
	cin>>n3;
	cout<<"\tDame el cuarto numero:"; 
	cin>>n4;
    cout<<"\tDame el quinto numero:"; 
	cin>>n5;
	cout<<endl;
	cout<<"\tIntroduce el número a buscar:";
	cin>>dato;
	
	int array[5] = {n1,n2,n3,n4,n5};//Creación de un array de cinco elementos
	
	//Algoritmo de la Busqueda Binaria
	inf=0;
	sup=5;
	i=0;
	while((inf<=sup)&&(i<5)){//Mientras la parte inferior es menor al superior y i es menor a 5 se ejecuta lo siguiente
		mitad = (inf+sup)/2;//La búsqueda parte desde La mitad que es igual a la suma del elemento inicial y final entre 2
		if(array[mitad] == dato){//Si la posición mitad es igual al dato introducido se ejecuta lo siguiente
			band='V';//El dato es verdadero, es decir, se ha encontrado
			break;
		}
		if(array[mitad]>dato){//Si la posición mitad es mayor al dato introducido se ejecuta lo siguiente
			sup = mitad;//La posición superior es igual a mitad
			mitad = (inf+sup)/2;//La búsqueda vuelve a iniciar desde La mitad que es igual a la suma del elemento (inf+sup)/2
		}
		if(array[mitad]<dato){//Si la posición mitad es menor al dato introducido se ejecuta lo siguiente
			inf = mitad;//La posición inferior es igual a mitad
			mitad = (inf+sup)/2;//La búsqueda vuelve a iniciar desde La mitad que es igual a la suma del elemento (inf+sup)/2
		}
		i++;
	}
	
	if(band == 'V'){
		cout<<endl;
		cout<<"El número se encontró en la posición : "<<mitad<<endl;
	}
	else{
		cout<<endl;
		cout<<"El número NO se encontró";
	}
	cout<<endl;
	system("pause");
	system("cls");
	cout<<"\n\tPresiona 2 para ingresar datos nuevos"<<endl;
	cout<<"\n\tPresiona 1 para salir"<<endl;
	cout<<"\t";
	cin>>rep;
	system("cls");
	}while(rep!=1);//Se ejecuta de nuevo las lineas anteriores en caso de que el usuario no seleccione una de esas opciones
	cout << "\t\t\tSALIDO"; exit(1);
	getch();
	return 0;
}
