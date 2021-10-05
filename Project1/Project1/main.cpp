#include"compl.h"
using namespace std;
int main() {
	
	Complex a;
	cout << a.number() << endl;
	Complex b,c;
	a.set(1.0, 2.0);
	b.set(3.0, 4.0);
	c.set(5.0, 6.0);
		cout << a + b << endl;
		cout << a - b << endl;
		cout << a * b << endl;
		cout << a / b << endl;
		(a = b)=c;
		cout << a <<" "<<b<<" "<< c<< endl;
		if (a == b) cout << "ab相等" << endl;
		else cout << "ab不相等" << endl;
		if (a != b) cout << "ab不相等" << endl;
		else cout << "ab相等" << endl;
		cout << "\n类的个数为：" << Complex::number()<<endl;

		return 0;

}