#include <iostream>
using namespace std;

class clsCounter
{
	private:
		int _Count;
	public:
		/*clsCounter() : _Count(0)
	{*empty body*/  /*}*/
		void inc_Count()
		{
			_Count++;
		}
		int GetCount()
		{
			return _Count;
		}
};

int main()
{
	clsCounter c1, c2;
	cout << "\nc1= " << c1.GetCount();
	cout << "\nc2= " << c2.GetCount() << endl;
	return 0;
}
