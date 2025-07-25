#include <iostream>
using namespace std;

class clsPerson
{
	private:
		int _ID = 10;
		string _FirstName;
		string _LastName;
		string _Email;
		string _Phone;
	public:
		clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
		{
			ID = _ID;
			_FirstName = FirstName;
			_LastName = LastName;
			_Email = Email;
			_Phone = Phone;
		}
		void Print()
		{
			cout << "Info:" << endl;
			cout << "______________________" << endl;
			cout << "ID       : " << _ID << endl;
			cout << "FirstName: " << _FirstName << endl;
			cout << "LastName : " << _LastName << endl;
			cout << "Full Name: " << _FirstName << " " << _LastName << endl;
			cout << "Email    : " << _Email << endl;
			cout << "Phone    : " << _Phone << endl;
			cout << "______________________" << endl;
		}

		void SendEmail(string Subject, string Body)
		{
			cout << "The following message sent successfully to email: " << _Email << endl;
			cout << "Subject: " << Subject << endl;
			cout << "Body   : " << Body << endl;
		}

		void SendSMS(string sms)
		{
			cout << "The following SMS sent successfully to phone: " << _Phone << endl;
			cout << sms << endl;
		}
};

int main()
{
	clsPerson Person1(21, "Osama", "Mahmoud Abdelnaby", "Osama@Gmail.com", "0120120120");
	Person1.Print();
	Person1.SendEmail("Hi", "How Are you?");
	Person1.SendSMS("How is life?");
	return 0;
}
