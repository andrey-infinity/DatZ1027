/*******************************************  
Andrejs Antjufejevs, aa09328 
C14. Dots skaitļu masīvs A(n). Izmest no masīva visus liekos elementus (izņemot
pirmo) tā, lai palikušie skaitļi veidotu augošu
elementu virkni. Izmest tikai tos skaitļus, bez kuru izmešanas nevar iztikt
augošas virknes iegūšanai.
Programma izveidota: 2010/09/25 
*******************************************/ 
#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <limits>

using namespace std;

const int MAX_N=100;

void getInput(int* a,int size){
	for(int i=0;i<size;i++)	{
		cout<<"Enter element number "<<i<<": ";
		cin>>a[i];
	}
}
void printArray(int* a,int size){
	cout<<"Result sequence is: ";
	for(int i=0;i<size;i++){
		if (a[i]!=0) cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(int argc, char* argv[]){
	
	int variables[MAX_N];
	int n=0;
	int exit=0;
	do	{
		cout<<"Enter elements count: ";
		cin>>n;
		getInput(variables,n);
	    int diff=0;

		for (int cur=1; cur<n; cur++) {
			if (variables[cur] < variables[cur-diff-1]) {
				diff++;
			} 
			else if (diff > 0) 	{
				variables[cur-diff] = variables[cur];
			}
		}
		n-=diff;
		printArray(variables,n);
		cout<<"Continue? (1) or Exit (0)"<<endl;
		cin>>exit;

	}while(exit);

	return 0;
}

