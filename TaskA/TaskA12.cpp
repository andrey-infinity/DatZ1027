/*******************************************  
Andrejs Antjufejevs, aa09328 
A12. Dots naturāls skaitlis n. Izdrukāt skaitli, kurš iegūts no dotā skaitļa,
izmetot ciparu k. (Piemēram, ja n=12025 un k=2, jāiegūst
105). Skaitļa dalīšana ciparos jāveic skaitliski.
Programma izveidota: 2010/09/25 
*******************************************/ 
#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>

using namespace std;
int main(int argc, char* argv[]) {
	int n=-1;
	int exit=0;
	do {
		int result=0,k=0,i=0;

		cout<<"Enter your number:";
		cin>>n;
		cout<<"Enter number to delete:";
		cin>>k;
		///
		while(n>0){
			int remainder = n % 10;
			if (remainder!=k) {
				result+=remainder*(int)pow((long double)10,i);
				i++;
			}
			n/=10;
		}
		cout<<"Your res="<<result<<endl;
		cout<<"Continue? (1) or Exit (0)"<<endl;
		cin>>exit;
	} while (exit);
	
	return 0;
}

