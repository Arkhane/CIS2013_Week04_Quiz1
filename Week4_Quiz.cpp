#include <iostream>

using namespace std;

int main()
{
	

	for (int i = 0; i <= 2000; i++)
	{
		
		if (i % 50==0)
		{
			cout << "FOO" << endl;
		}

		if (i % 33==0)
		{
			cout << "BAR" << endl;
		}
		else 
		{
			cout << i << endl;
		}
	}

	return 0;
}
