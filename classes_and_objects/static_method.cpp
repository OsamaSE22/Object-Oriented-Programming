#include <iostream>
using namespace std;

class clsA
{
	public:
		static int Function1()
		{
			return 10;
		}
		int function2()
		{
			return 20;
		}
};

int main()
{
	// I can call the static function without needing to create an object and with using objects too!
	clsA A, B;
	/*printing the static method without needing to objects because it's a class method and shared one*/
	cout << clsA::Function1() << endl;
	cout << A.Function1() << endl;
	/*printing the object method that is not shared one between the objects!*/
	cout << A.function2() << endl;

	return (0);
}
