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
   
    //we put the default constructor here temperorly becasue inheritance will use it, 
    //in the comming lectures we will solve the prametarized constructor with inheritance.
    clsPerson()
    {
         
    }

   clsPerson(int ID, string FirstName, string LastName,string Email, string Phone)
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
    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    //Property Get
    string FirstName()
    {
        return _FirstName;
    }

    //Property Set
    void setLastName(string LastName)
    {
        _LastName = LastName;
    }

    //Property Get
    string LastName()
    {
        return _LastName;
    }

    //Property Set
    void setEmail(string Email)
    {
        _Email = Email;
    }

    //Property Get
    string Email()
    {
        return _Email;
    }

    //Property Set
    void setPhone(string Phone)
    {
        _Phone = Phone;
    }

    //Property Get
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
        cout << "\nInfo:";
        cout << "\n___________________";
        cout << "\nID       : " << _ID;
        cout << "\nFirstName: " << _FirstName;
        cout << "\nLastName : " << _LastName;
        cout << "\nFull Name: " << FullName();
        cout << "\nEmail    : " << _Email;
        cout << "\nPhone    : " << _Phone;
        cout << "\n___________________\n";

    }

    void SendEmail(string Subject, string Body)
    {
        
        cout << "\nThe following message sent successfully to email: " << _Email;
        cout << "\nSubject: " << Subject;
        cout << "\nBody: " << Body << endl;

    }

    void SendSMS(string TextMessage)
    {
        cout << "\nThe following SMS sent successfully to phone: " <<_Phone;
        cout << "\n" << TextMessage<<endl;
    }
     
};
class clsEmployee : public clsPerson
{
	private:
		string _Title;
		string _Department;
		float _Salary;
	public:
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

		void SetDepartment(string Department)
		{
			_Department = Department;
		}

		string Department()
		{
			return _Department;
		}

		void SetSalary(float Salary)
		{
			_Salary = Salary;
		}
		float Salary()
		{
			return _Salary;
		}
};

int main()
{
	clsEmployee Employee1;
	Employee1.setFirstName("Mohammed");
	Employee1.setLastName("Abu-Hadhoud");
	Employee1.setEmail("a@a.com");
	Employee1.Print();
	Employee1.SendEmail("Hi", "How are you?");
	Employee1.SetSalary(5000);

   cout << "Salary is: " << Employee1.Salary();

   //Calling the print will not print anything from derived class, only base class
   //therfore the print method will not serve me here, this is a problem will be solved in the next files which I'll write :) .
   Employee1.Print();
}
