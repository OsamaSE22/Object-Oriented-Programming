#include <iostream>
using namespace std;

class Student
{
	public:
		string name;
		int age;
		void print_info()
		{
			cout << "the student name is: " << name << " and the student age is: "<<age << endl;
		}
};
int main()
{
	Student member1;
	member1.name = "osama";
	member1.age = 23;
	member1.print_info();

	return (0);
}
