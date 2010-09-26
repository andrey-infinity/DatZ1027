/*******************************************  
Andrejs Antjufejevs, aa09328 
D15. Izveidot klasi "Trīsstūris", kurā tiek glabāti trīs skaitļi - trīsstūra
malu garumi. Klasei izveidot šādas metodes: (1) konstruktors, ar
kuru tiek padotas sākotnējās vērtības, (2) destruktors, kurš paziņo par objekta
likvidēšanu, (3) metode "Mainīt" ar trīs parametriem, kas
izmaina malu garumu vērtības par attiecīgo daudzumu (nevis nomaina), (4) metode
"Drukāt", kas izdrukā uz ekrāna malu garumus, (5)
metode "Aprēķins", kas izdrukā trīsstūra mediānu garumus un noskaidro trīsstūra
tipu: šaurleņķa, taisnleņķa vai platleņķa.
Programma izveidota: 2010/09/25 
*******************************************/ 
#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include "Triangle.h"


using namespace std;
int main(int argc, char* argv[]){
	int exit=0;
	Triangle *t;
	do	{
		t = new Triangle(5,3,4); //Right triangle
		t->Calculate();

		t=new Triangle(3,4,3); //  Isosceles acute triangle // Ravnobedrennij
		t->Calculate();

		t=new Triangle(4,3,6); // obtuse triangle // Tupougolnij
		t->Calculate();

		t=new Triangle(6,7,4); // acute triangle // ostrougolnij
		t->Calculate();


		t->Print();
		cout<<"Continue? (1) or Exit (0)"<<endl;
		cin>>exit;
	}while(exit);

	delete t;
	system("Pause");
	return 0;
}

