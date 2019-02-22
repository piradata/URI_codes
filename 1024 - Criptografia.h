#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	int k, i;
	char x;
	int q;


	cin >> q ;
	cin.ignore ();

	for(k = 1; k <= q; k++)
	{
		string str;
		getline(cin, str);

		for(i = 0; i < (int)str.length(); i++)
		{
			if(isalpha(str[i]))
			{
				str[i] = (char)(((int)str[i]) + 3);
			}
		}

		for(i = 0; i < ((int)(str.length() / 2)); i++)
		{
			x = str[i];
			str[i] = str[str.length() - 1 - i];
			str[str.length() - 1 - i] = x;
		}

		for(i = ((int)(str.length() / 2)); i < (int)str.length(); i++)
		{
			str[i] = (char)(((int)str[i]) - 1);
		}

		cout << str << "\n";
	}
	return 0;
}