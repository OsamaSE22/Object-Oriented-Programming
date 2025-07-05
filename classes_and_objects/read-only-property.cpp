#include <iostream>
using namespace std;

class clsPerson
{
        private:
		// this is to be read only!
		int _ID = 10;
		// i can read and write to these variables!
                string _FirstName;
                string _LastName;
        public:
		//property get and only get so it's just for only read!
		int ID()
		{
			return _ID;
		}
                //property set
                void setFirstName(string FirstName)
                {
                        _FirstName = FirstName;
                }

                //property Get
                string getFirstName()
                {
                        return _FirstName;
                }

                //property Set
                void setLastName(string LastName)
                {
                        _LastName = LastName;
                }
                //property Get
                string getLastName()
                {
                        return _LastName;
                }

                string FullName()
                {
                        return _FirstName + " " + _LastName;
                }
};

int main()
{
        clsPerson Person1;

        Person1.setFirstName("Osama");
        Person1.setLastName("Mahmoud Abdelnaby");

	cout << "ID: " << Person1.ID() << endl;
        cout << "First Name:" << Person1.getFirstName() << endl;
        cout << "Last Name:" << Person1.getLastName() << endl;
        cout << "Full Name:" << Person1.FullName() << endl;

        return (0);
}
