#include <iostream>

using namespace std;

int main()
{
	

	for (int i = 1; i <= 2000; i++)
	{
		
		if (i % 50==0)
		{
			cout << "FOO" << endl;
		}

		else if (i % 33==0)
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
