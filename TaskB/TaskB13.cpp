/*******************************************  
Andrejs Antjufejevs, aa09328 
B13. Doti naturāli skaitļi n un a(1), a(2), ... a(n).. Atrast minimālo no
dotajiem saliktajiem skaitļiem (t.i., tādiem, kas nav pirmskaitļi).
Programma izveidota: 2010/09/25 
*******************************************/ 
#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <limits>

using namespace std;
bool is_prime(int n){
	if (n <= 1)
		return false;
	for (int j = 2; j * j <= n; j++)
		if (n % j == 0) return false;
	return true;
}
int main(int argc, char* argv[])
{
	int n=1;
	int exit=0;
	do{
		int min=std::numeric_limits<int>::max();
		int input;
		cout<<"Enter elements count"<<endl;
		cin>>n;
		while(n--) {
			cout<<"Enter element :";
			cin>>input;
			if ((input<min)&&(!is_prime(input))) min=input;
			
		}
	
		cout<<min<<endl;
		cout<<"Continue? (1) or Exit (0)"<<endl;
		cin>>exit;
	}while(exit);
	return 0;
}

