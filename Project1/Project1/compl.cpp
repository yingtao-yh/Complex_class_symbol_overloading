#include"compl.h"
int Complex:: count=0;
Complex::Complex(double real, double imag) :m_real(real), m_imag(imag) { ++count; }
Complex::Complex(const Complex& a){
	m_real = a.m_real;
	m_imag = a.m_imag;
	count++;
}
Complex ::~Complex() { count--; }
Complex::Complex() {
	count++;
}
void Complex::set(double real , double imag) {
	m_real = real;
	m_imag = imag;
}
ostream& operator<<(ostream& os, const Complex& rhs) {
	os << rhs.m_real << "+" << rhs.m_imag << "i" << endl;
	return os;
}
 Complex operator/(const Complex& a, const Complex& b) {
	Complex result(((a.m_real * b.m_real + a.m_imag * b.m_imag) / (b.m_real * b.m_real - b.m_imag * b.m_imag)),
		((a.m_imag * b.m_real - a.m_real * b.m_imag) / (b.m_real * b.m_real - b.m_imag * b.m_imag)));
	return result;
}
 Complex operator*(const Complex& a, const Complex& b) {
	 Complex result(a.m_real * b.m_real - a.m_imag * b.m_imag, a.m_real * b.m_imag + b.m_real * a.m_imag);
	 return result;
 }
 bool operator==(const Complex& a, const Complex& b) {
	 return (a.real() == b.real()) && (a.imag() == b.imag());
 }
 bool operator!=(const Complex& a, const Complex& b) {
	 return (a.real() != b.real()) && (a.imag() != b.imag());
 }

 
