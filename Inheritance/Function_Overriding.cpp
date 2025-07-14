#include <iostream>
using namespace std;

class clsPerson
{
	private:
		int _ID;
		string _FirstName;
		string _LastName;
		string _Email;
		string _Phone;
	public:
		clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
		{
			_ID = ID;
			_FirstName = FirstName;
			_LastName = LastName;
			_Email = Email;
			_Phone = Phone;
		}
		//Read Only Property
		int ID()
		{
			return _ID;
		}
		
		//Property Set
		void SetFirstName(string FirstName)
		{
			_FirstName = FirstName;
		}
		// property Get
		string FirstName()
		{
			return _FirstName;
		}
		// Property Set
		void SetLastName(string LastName)
		{
			_LastName = LastName;
		}
		//property Get
		string LastName()
		{
			return _LastName;
		}
		//property Set
		void SetEmail(string Email)
		{
			_Email = Email;
		}
		// property Get
		string Email()
		{
			return _Email;
		}
		//property Set
		void SetPhone(string Phone)
		{
			_Phone = Phone;
		}
		// property Get
		string Phone()
		{
			return _Phone;
		}
		string FullName()
		{
			return _FirstName + " " + _LastName;
		}

		void Print()
		{
			cout << "Info:" << endl;
			cout << "__________________________" << endl;
			cout << "ID                   :" << _ID << endl;
			cout << "FirstName            :" << _FirstName << endl;
			cout << "LastName             :" << _LastName << endl;
			cout << "Full Name            :" << FullName() << endl;
			cout << "Email                :" << _Email << endl;
			cout << "Phone                :" << _Phone << endl;
			cout << "__________________________" << endl;
		}
		void SendEmail(string Subject, string Body)
		{
			cout << "the following message sent successfully to email: " << _Email <<endl;
			cout << "Subject: " << Subject << endl;
			cout << "Body   : " << Body << endl;
		}

		void SendSMS(string TextMessage)
		{
			cout << "The following SMS sent successfully to phone: " << _Phone << endl;
			cout << TextMessage << endl;
		}

};

class clsEmployee : public clsPerson
{
	private:
		string _Title;
		string _Department;
		float _Salary;
	public:
		clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary) : clsPerson(ID, FirstName, LastName, Email, Phone)
	{
		_Title = Title;
		_Department = Department;
		_Salary = Salary;
	}
		//property Set
		void SetTitle(string Title)
		{
			_Title = Title;
		}
		// property Get
		string Title()
		{
			return _Title;
		}
		//property Set
		void _SetDepartment(string Department)
		{
			_Department = Department;
		}
		// property Get
		string Department()
		{
			return _Department;
		}
		//property set
		void SetSalary(float Salary)
		{
			_Salary = Salary;
		}
		// property Get
		float Salary()
		{
			return _Salary;
		}
		void Print()
		{
			cout << "Info:" << endl;
                        cout << "__________________________" << endl;
                        cout << "ID                   :" << ID() << endl;
                        cout << "FirstName            :" << FirstName() << endl;
                        cout << "LastName             :" << LastName() << endl;
                        cout << "Full Name            :" << FullName() << endl;
                        cout << "Email                :" << Email() << endl;
                        cout << "Phone                :" << Phone() << endl;

			cout << "Title                :" << _Title << endl;
			cout << "Department           :" << _Department << endl;
			cout << "Salary               :" << _Salary << endl;
                        cout << "__________________________" << endl;

		}
};

int main()

{

    clsEmployee Employee1 ( 10, "Mohammed","Abu-Hadhoud","A@a.com","8298982","CEO","ProgrammingAdvices",5000);

    Employee1.Print();

    return 0;
}
