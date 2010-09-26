#pragma once
class Triangle
{
private: 
	double a;
	double b;
	double c;
public:
	Triangle(void);
	Triangle(double a,double b, double c);
	virtual ~Triangle(void);
	void Change(double a,double b,double c);
	void Print();
	void Calculate();
};

