// WAP to perform arthmatic operations using classes and eaach member function should be performing only one operation
#include<iostream>
using namespace std;

class AO {
	public:
	int a,b,c;
	
	void input() {
		cin>>a>>b;
	}
	void add() {
		c = a + b;
		cout<<"Addition is ";
		cout<<c;
	}
	void sub() {
		c = a - b;
		cout<<" Substraction is ";
		cout<<c;
	}
	void mul() {
		c = a * b;
		cout<<" Multiplication is ";
		cout<<c;
	}
	void div() {
		c = a / b;
		cout<<" Division is ";
		cout<<c;
		cout<<endl;
	}
};
main() {
	AO _a;
	_a.input();
	_a.add();
	_a.sub();
	_a.mul();
	_a.div();
}