#include <iostream>
using namespace std;

class clsPerson
{
	public:
		string FullName;

		//this is constructor will be called when object is built
		clsPerson()
		{
			FullName = "Osama Mahmoud AbdelNaby";
			cout << "\nHi, I'm Constructor";
		}

		// this is destructor will be called when object is destroyed
		~clsPerson()
		{
			cout << "\nHi, I'm Destructor\n";
		}
};

void Func1()
{
	clsPerson *person2 = new clsPerson;
	// always I use delete whenever I use new, otherwise object will remain in memory
	cout << "flag\n"; // this is to see the function excuted in console
	delete person2;
}
// in this program i play with c++ and see how the class starts and damashed when running stops
int main()
{


	Func1(); // the function is called first and the denote the stack behavior in compiling the program 
	clsPerson person1;
	//Func1();
	return 0;
}
