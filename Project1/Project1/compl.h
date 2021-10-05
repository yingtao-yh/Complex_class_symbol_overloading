#ifndef COMPL_H
#define COMPL_H
#include<iostream>
using namespace std;

class Complex {
public:
	/*Complex() = default;
	Complex(double real, double imag);*/
	Complex();
	Complex(double r, double h);

	Complex(const Complex& a);

	~Complex();

	double real()const { return m_real; }
	double imag()const { return m_imag; }
/*	Complex(const Complex& rhs) :m_real(rhs.m_real), m_imag(rhs.m_imag) {}
	~Complex() {  }*/
	static int number() { return count; }

	void set(double , double );
	friend ostream& operator<<(ostream& os, const Complex& rhs);
	friend Complex operator/(const Complex& a, const Complex& b);
	friend Complex operator*(const Complex& a, const Complex& b);
	friend bool operator==(const Complex& a, const Complex& b);
	friend bool operator!=(const Complex& a, const Complex& b);
	Complex& operator=(const Complex& rhs) {
		if (&rhs == this)return*this;
		m_real = rhs.m_real;
		m_imag = rhs.m_imag;
		return *this;
	}
	Complex operator+(const Complex& b)
	{
		Complex sum;
		sum.m_real = this->m_real + b.m_real;
		sum.m_imag = this->m_imag + b.m_imag;		
		return sum;
	}
	Complex operator-(const Complex& b)
	{
		Complex sub;
		sub.m_real = this->m_real - b.m_real;
		sub.m_imag = this->m_imag - b.m_imag;
		return sub;
	}
	
private:
	double m_real;
	double m_imag;
	static int count;

};



#endif#pragma once
