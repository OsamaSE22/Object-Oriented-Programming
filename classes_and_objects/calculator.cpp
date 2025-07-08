#include <iostream>
using namespace std;

class clsCalculator
{
	private:
		int _number = 0;
	public:
		void Clear()
		{
			_number = 0;
			cout << "Result After Clearing "<< _number << endl;
		}
		void Add(int number)
		{
			_number += number;
			cout << "Result After Adding " << number << " is " << _number << endl;
		}
		void Subtract(int number)
		{
			_number -= number;
			 cout << "Result After Subtracting " << number << " is " << _number << endl;
		}
		void Multiply(int number)
		{
			_number *= number;
			cout << "Result After Multiplying " << number << " is " << _number << endl;
		}
		void Divide(int number)
		{
			if (number == 0)
			{
				number = 1;
				_number /= number;
				 cout << "Result After Dividing " << number << " is " << _number << endl;
			}
			else
			{
			_number /= number;
			cout << "Result After Dividing " << number << " is " << _number << endl;
			}
		}
	/*	void PrintResult()
		{
			
		}*/

};
int main()
{
	clsCalculator calculator1;
	calculator1.Add(5);
	calculator1.Add(10);
	calculator1.Subtract(3);
	calculator1.Multiply(2);
	calculator1.Clear();
	calculator1.Add(3);
	calculator1.Divide(0);
	calculator1.Divide(3);
	calculator1.Add(10);
	return 0;
}
