#include "Triangle.h"
#include <sstream>
#include <iostream>
#include <math.h>

using std::cout;
using std::endl;


Triangle::Triangle(void) {
		this->a=0;
		this->b=0;
		this->c=0;
	}

Triangle::Triangle(double a,double b,double c): a(a),b(b),c(c){
}

void Triangle::Print()	{
	cout<<"A="<<this->a<<endl<<"B="<<this->b<<endl<<"C="<<this->c<<endl;
}
void Triangle::Change(double a,double b,double c)	{
	this->a+=a;
	this->b+=b;
	this->c+=c;
}

void getValues(double a,double b,double c,double &H,double &K,double &L){
	if((a>b)&&(a>c)) {
		H=a;
		K=(b>c)?b:c;
		L=(b<c)?b:c;
	}else if((b>c)&&(b>a))	{
		H=b;
		K=(a>c)?a:c;
		L=(a<c)?a:c;
	}else	{
		H=c;
		K=(a>b)?a:b;
		L=(a<b)?a:b;
	}
}

void Triangle::Calculate()	{
	std::stringstream answer;
	double H,K,L,T1,T2,T3;
	getValues(a,b,c,H,K,L);
		
	T1=pow(H,2);
	T2=pow(K,2);
	T3=pow(L,2);

	answer<<"Median is "<<sqrt((2*T2+2*T3-T1)/4)<<endl;

	if(T3+T2==T1) answer<<"Prjamougolnij";
	if(T2+T3>T1) answer<<"Ostrougolnij ";
	if(T2+T3<T1) answer<<"Tupougolnij" ;
	
	if ((a==b) || (b==c) || (c==a))answer<<"Ravnobedrennij";
		
	if((a==b) && (b==c)) answer<<"Ravnostoronnij";
		
	answer<<endl;
	cout<<answer.str();
}

Triangle::~Triangle(void){
	cout<<"Distructing Triangle"<<endl;
}
