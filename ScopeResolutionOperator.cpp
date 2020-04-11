// WAP using classes to check wether the no. is a palindrome or not
#include<iostream>
using namespace std;

class palin {
	public:
	int a;
	int b;
	int sum;
	
	void input();
	void reverse();
	void check();
};
main() {
	palin _a;
	_a.input();
	_a.reverse();
	_a.check();	
}
void palin::input() {
	cin>>a;
	sum = 0;
	b = a;
}
void palin::reverse() {
	int rem;
	int i = 0;
	while(a>0) {
		rem = a % 10;
		sum = sum * 10 + rem;
		a = a / 10;
	}
}
void palin::check() {
	if(b == sum)
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";
	cout<<endl;
}