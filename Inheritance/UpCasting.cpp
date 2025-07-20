#include <iostream>
using namespace std;

class clsPerson
{
	public:
		string FullName = "Osama Mahmoud Abdelnaby";
};
class clsEmployee : public clsPerson
{
	public:
		string Title = "CEO";
};

int main()
{
	clsEmployee Employee1;

	cout << Employee1.FullName << endl;
	
	/**
	 * upcasting
	 * this will convert employee to person.
	 */
	clsPerson *Person = &Employee1;
	cout << Person->FullName << endl;
	cout << Employee1.FullName << endl;

	/**
	 * downcasting
	 * tou cannot convert person to employee
	 */
	return (0);
}
