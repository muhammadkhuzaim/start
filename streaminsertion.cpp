#include<iostream>
using namespace std;

class School {
	int a;
public:
	School(int A):a(A){}

	
	friend ostream& operator<<(ostream& out, School& obj) {
		out << "Value is: "; out << obj.a;
		return out;
	}

	friend istream& operator>>(istream& in, School& obj) {
		cout << "Enter Value: "; in >> obj.a;
		return in;
	}
};

int main() {
	School obj1(100);
	cin >> obj1;
	cout << obj1;

}