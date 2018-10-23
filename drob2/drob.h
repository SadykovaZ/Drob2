#pragma once
#include <iostream>
using namespace std;

class drob
{
	int x, y;
public:
	drob(int x=0,int y= 1);
	void print() const ;
	void setX(int x);
	void setY(int y);
	int getX() const { return x; }
	int getY() const { return y; }
	drob operator+=(const drob &d);
	drob operator-=(const drob &d);
	drob operator*=(const drob &d);
	drob operator/=(const drob &d);
	
	drob operator+(const drob &d);
	double getDrob() const {
		return (double)x / y;
	}
	//prefix
	drob operator++();
	drob operator++(int);
};

drob operator+(const drob&a, const drob&b);
bool operator<(const drob&a, const drob&b);
drob operator-(const drob&a);
ostream& operator<<(ostream&os, const drob&d);
istream& operator>>(istream&is, drob&d);
//class time_
//{
//	int h, m, s;
//public:
//	void addSec(){}
//	time_ & operator++()
//	{
//		this->addSec();
//		return *this;
//	}
//
//	time_ operator(int)
//	{
//		time_ tmp(*this);
//		this->addSec();
//		return tmp;
//	}
//};