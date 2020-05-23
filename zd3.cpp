#include <iostream>
#include <string>

using namespace std;

int main()
{
	string abc;
	getline(cin, abc);

	for (int i=0; i<abc.size(); i++)
	{
		switch (abc[i])
		{
		case 'A': abc[i]='a'; break;
		case 'E': abc[i]='e'; break;
		case 'U': abc[i]='u'; break;
		case 'I': abc[i]='i'; break;
		case 'O': abc[i]='o';break;
		}
	}
	cout<<abc;
	
	
return 0;
}
