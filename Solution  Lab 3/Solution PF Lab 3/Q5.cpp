#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int i,m;
	int max = 0;
	char arr[100];
	int n, a=0,b=0,c=0,d=0,f=0;
	cout << "Enter total strenght of students in your class: ";
	cin >> n;
	cout << "   Grade Analysis:" << endl;
	cout << "Enter grade of students: ";
	for ( i = 0; i < n; i++)
	{
		cin >> arr[i];


		if ((arr[i] == 'A') || (arr[i] == 'a'))
		{
			a++;
		}
		if ((arr[i] == 'B') || (arr[i] == 'b'))
		{
			b++;
		}
		if ((arr[i] == 'C') || (arr[i] == 'c'))
		{
			c++;
		}
		if ((arr[i] == 'D') || (arr[i] == 'd'))
		{
			d++;
		}
		if ((arr[i] == 'f') || (arr[i] == 'F'))
		{
			f++;
		}
		if (a > b)
		{
			cout << a << endl;
			cout << arr[i] << endl;
			m = a;
			
		}
		if (b > a)
		{
			cout << b << endl;
			cout << arr[i] << endl;
			m = b;
		}
		if (c > a && c > b)
		{
			cout << c << endl;
			cout << arr[i] << endl;
			m = c;
		}
		if (d > a && d > b && d > c)
		{
			cout << d << endl;
			cout << arr[i] << endl;
			m = d;
		}
		if (f > a && f > b && f > c && f > d)
		{
			cout << f << endl;
			cout << arr[i] << endl;
			m = f;
		}
	}
	ofstream fout;
	fout.open("Task5.txt", ios::out);
	fout << "Most occuring grade count is: " << m << endl;
	fout.close();
	return 0;

}