#include <iostream>
using namespace std;

class clsPerson
{
	public:
		virtual void print()
		{
			cout << "Hi, I'm a person" << endl;
		}
};

class clsEmployee : public clsPerson
{
	public:
		void print()
		{
			cout << "Hi, I'm an Employee" << endl;
		}
};

class clsStudent : public clsPerson
{
	public:
		void print()
		{
			cout << "Hi, I'm a student" << endl;
		}
};

int main()
{
	clsEmployee E1;
	clsStudent S1;

	E1.print();
	S1.print();
	
	clsPerson* P1 = &E1;
	clsPerson* P2 = &S1;

	P1->print();
	P2->print();
}
