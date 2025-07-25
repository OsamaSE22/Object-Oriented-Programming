#include <iostream>
using namespace std;

class clsA
{
	private:
		//only accessible inside this class.
		int _Var1;
		void _Func1()
		{
			cout << "Function 1";
		}
	protected:
		//only accessible inside this class and all derived classes
		int Var2;
		void Func2()
		{
			cout << "Function 2";
		}
		
	public:
		// Accessible inside this class, all derived classes, and outside class.
		int Var3;
		void Func3()
		{
			cout << "Function3";
		}
};
class clsB : clsA
{
	public:
		void func1()
		{
			clsA::Var2 = 4;
			cout << clsA::Var2;
		}
};

int main()
{
	clsB B;
	B.func1();

	return 0;
}
