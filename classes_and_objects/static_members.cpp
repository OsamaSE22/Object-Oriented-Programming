#include <iostream>
using namespace std;

class clsA
{
	public:
		int var;
		static int counter;
		clsA()
		{
			counter++;
		}
		void print()
		{
			cout << "var = " << var << endl;
			cout << "counter = " << counter << endl <<endl;
		}
};
int clsA::counter = 0;

int main()
{
	clsA A, B, C;
	A.var = 5;
	B.var = 10;
	C.var = 15;

	A.print();
	B.print();
	C.print();
	
	return 0;
}
