#include <iostream>
using namespace std;

main()
{
	int n;
	int f = 1;
	cout << "enter n: ";
	cin >> n;
	
	int i=1; 
	while(i<=n)
	{
		f *= i;
		i++;
	}
	cout<<"factorial= " << f;
}

