#include <iostream>
#include <fstream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include <cstdlib>


using namespace std;

int menu(){
	
	cout<<"PROYECTO"<<endl<<endl;
	cout<<"Seleccione la opcion que quiere realizar"<<endl<<endl; 
	cout<<"1) Suma, Resta, Multiplicaci�n y Divisi�n de dos n�meros "<<endl<<endl;
	cout<<"2) Determinar si un n�mero es par o impar" <<endl<<endl;
	cout<<"3) Convertir de kil�metros a millas, metros a pulgadas, de libras a kilos y viceversa "<<endl<<endl;
	cout<<"4) Determinar si una palabra o un n�mero es pal�ndromo. "<<endl<<endl;
	cout<<"5) Conversi�n de n�meros ar�bigos a romanos (m�nimo 1,000) "<<endl<<endl;
	cout<<"6) Conversi�n de n�meros enteros a letras"<<endl<<endl;
	cout<<"7) Conversi�n de n�meros enteros con decimal a letras  "<<endl<<endl;
	cout<<"8) Una tabla de multiplicar "<<endl<<endl;
	cout<<"9) Todas las tablas de multiplicar del 1 al 10 "<<endl<<endl;
	cout<<"10) Crear de forma gr�fica la multiplicaci�n manual"<<endl<<endl;
	cout<<"11) Conversi�n de n�meros decimales a binario "<<endl<<endl;
	cout<<"12)  Conversi�n de n�meros decimales a hexadecimales  "<<endl<<endl;
	cout<<"13) Crear Figuras Geom�tricas B�sicas. "<<endl<<endl;
	cout<<"14) Mover un punto en toda la pantalla "<<endl<<endl;
	cout<<"15) Simulaci�n de un Cajero (Aut�mata) "<<endl<<endl;
	cout<<"";
}
void operaciones(ifstream &Lec){
 	char resp;
 int num,num2,num3,c,c2,c3;
 float p,km,m,mi,k,lb;
 
 do{
 	printf("Hola, este programa  es un converson de unidades de medida .\n\n");
 
 	printf("Seleccione la unidad a la que quiere convertir. \n1.-Metros/pulgadas\n2.-Kilometros/millas \n3.-Libras/Kilos\n\n");
 	scanf("%d",&num);
 	system("cls");
 	if(num==1){
 		printf("Ud; Ha seleccionado la opcion de Metros/pulgadas\n\n");
 		printf("�A que unidad lo quiere convertir? \n \n1.-Metros-->Pulgadas \n \n2.-Pulgadas-->Metros\n\n");
 		scanf("%d",&num2);
 		system("cls");
		 printf("Ingrese el numero a convertir\n");
 		scanf("%d",&c);
 		} if(num2==1){
 		p=c*39.3701;
 		printf("Las pulgadas son de: %.3f",p);
	 }else if(num2==2){
	 	m=c*0.0254;
	 	printf("los metros son de :%.3f",m);
	 }else
		 if(num==2){
		 	printf("Ud;ha seleccionado la opcion de Kilometros\n");
		 	printf("A que unidad lo quiere convertir.\n \n1.Kilometros-->Millas\n \n2.Millas-->Kilometros\n\n");
		 	scanf("%d",&num3);
		 	 printf("ingrese el numero a convertir\n");
		 	 scanf("%d",&c2);
			 }if(num3==1){
			 	mi=c2*0.621371;
			 	printf("Las Millas son de: %.3f",mi);
			 }else if(num3==2){
			    km=c2*1.60934;
			  	printf("Los Kilometros son de: %.4f",km);
			   
			  }else if(num==3){
			  printf("Ud;ha seleccionado la opcion de Libras/Kilos\n");
		 	printf("A que unidad lo quiere convertir. \n \n1.-Libras-->Kilos\n \n2.-Kilos-->Libras");
		 	scanf("%d",&num3);
		 	printf("ingrese el numero a convertir\n");
		 	 scanf("%d",&c3);
			 }if(num3==1){
			 	k=c3*0.453592;
			 	printf("Los Kilos son de: %.4f",k);
			 }else
			 if(num3==2){
			 	lb=c3*2.20462;
			 	printf("Las libras son de : %.3f",lb);
 
				 }
				 	printf("�Desea convertir otro numero? (s/n)");
				 	scanf("%s",&resp);
				 }
		

				 	while(resp=='s');
				 	getch();
}

void pareimpar(ifstream &Lec){
	int numero;
	
	cout<< "Dijite un numero: ";
	cin>>numero;	
	if (numero == 0){
	cout<<"El numero es Neutral";	
	}
	else if (numero%2==0){
	cout<<"El numero es par";
	}
	else{
	cout<<"El numero es impar";
	}
	
}

void convertidor(ifstream &Lec){
 	char resp;
 int num,num2,num3,c,c2,c3;
 float p,km,m,mi,k,lb;
 
 do{
 	printf("Hola, este programa  es un converson de unidades de medida .\n\n");
 
 	printf("Seleccione la unidad a la que quiere convertir. \n1.-Metros/pulgadas\n2.-Kilometros/millas \n3.-Libras/Kilos\n\n");
 	scanf("%d",&num);
 	system("cls");
 	if(num==1){
 		printf("Ud; Ha seleccionado la opcion de Metros/pulgadas\n\n");
 		printf("�A que unidad lo quiere convertir? \n \n1.-Metros-->Pulgadas \n \n2.-Pulgadas-->Metros\n\n");
 		scanf("%d",&num2);
 		system("cls");
		 printf("Ingrese el numero a convertir\n");
 		scanf("%d",&c);
 		} if(num2==1){
 		p=c*39.3701;
 		printf("Las pulgadas son de: %.3f",p);
	 }else if(num2==2){
	 	m=c*0.0254;
	 	printf("los metros son de :%.3f",m);
	 }else
		 if(num==2){
		 	printf("Ud;ha seleccionado la opcion de Kilometros\n");
		 	printf("A que unidad lo quiere convertir.\n \n1.Kilometros-->Millas\n \n2.Millas-->Kilometros\n\n");
		 	scanf("%d",&num3);
		 	 printf("ingrese el numero a convertir\n");
		 	 scanf("%d",&c2);
			 }if(num3==1){
			 	mi=c2*0.621371;
			 	printf("Las Millas son de: %.3f",mi);
			 }else if(num3==2){
			    km=c2*1.60934;
			  	printf("Los Kilometros son de: %.4f",km);
			   
			  }else if(num==3){
			  printf("Ud;ha seleccionado la opcion de Libras/Kilos\n");
		 	printf("A que unidad lo quiere convertir. \n \n1.-Libras-->Kilos\n \n2.-Kilos-->Libras");
		 	scanf("%d",&num3);
		 	printf("ingrese el numero a convertir\n");
		 	 scanf("%d",&c3);
			 }if(num3==1){
			 	k=c3*0.453592;
			 	printf("Los Kilos son de: %.4f",k);
			 }else
			 if(num3==2){
			 	lb=c3*2.20462;
			 	printf("Las libras son de : %.3f",lb);
 
				 }
				 	printf("�Desea convertir otro numero? (s/n)");
				 	scanf("%s",&resp);
				 }
		

				 	while(resp=='s');
				 	getch();
}

 
void palindronomo(ifstream &Lec) {
 
	string palabra;
 
	cout<<"Ingrese palabra:"<<endl;
	cin >> palabra;
 
	size_t longitud = palabra.length()-1;
	size_t i=0;
	bool esPalindromo = true;
 
	for(i=0 ; i<palabra.length()/2 && esPalindromo ;i++) {
 
		if(palabra[i]!=palabra[longitud-i]){
			esPalindromo = false;
		}
 
	}
 
    cout<<((true == esPalindromo) ? "es pal�ndromo" : "no es pal�ndromo")<<endl;
 
	
 
}
 
	

int main(){
	ofstream Esc;
	ifstream Lec;
	int op;
	do{
		system("cls");
		op = menu();
		switch(op){
			case 1:
				operaciones(Lec);
			break; 
			case 2:
				pareimpar(Lec);
			break;
			case 3:
				convertidor(Lec);
			break;
			case 4:
				palindronomo(Lec);
			break;
			/*case 5:
				eliminar(Lec);
			break;*/
		}
	}while(op !=6);
	return 0;
}
