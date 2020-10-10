#include<iostream>
#include<string>
#include<time.h>

using namespace std;

int runTheMenu()
{
	string clearCin = "";
	int userSelection = 0;

	cout << "Enter the number of number of letters in Olivia's husband's name" << endl;
	cin >> userSelection;

	while (userSelection < 1 || cin.fail())
	{
		if (cin.fail())
		{
			cin.clear();
			userSelection = 0;
			cin >> clearCin;
		}
		cout << "Invalid entry, please try again" << endl;
		cin >> userSelection;
	}

	return userSelection;
}

void generateTheName(string& inName, int num)
{
	string letter = "";

	for (int i = 0; i < num; i++)
	{
		int gen = rand() % 26 + 1;
		if (gen == 1)
		{
			letter = "a";
		}
		else if (gen == 2)
		{
			letter = "b";
		}
		else if (gen == 3)
		{
			letter = "c";
		}
		else if (gen == 4)
		{
			letter = "d";
		}
		else if (gen == 5)
		{
			letter = "e";
		}
		else if (gen == 6)
		{
			letter = "f";
		}
		else if (gen == 7)
		{
			letter = "g";
		}
		else if (gen == 8)
		{
			letter = "h";
		}
		else if (gen == 9)
		{
			letter = "i";
		}
		else if (gen == 10)
		{
			letter = "j";
		}
		else if (gen == 11)
		{
			letter = "k";
		}
		else if (gen == 12)
		{
			letter = "l";
		}
		else if (gen == 13)
		{
			letter = "m";
		}
		else if (gen == 14)
		{
			letter = "n";
		}
		else if (gen == 15)
		{
			letter = "o";
		}
		else if (gen == 16)
		{
			letter = "p";
		}
		else if (gen == 17)
		{
			letter = "q";
		}
		else if (gen == 18)
		{
			letter = "r";
		}
		else if (gen == 19)
		{
			letter = "s";
		}
		else if (gen == 20)
		{
			letter = "t";
		}
		else if (gen == 21)
		{
			letter = "u";
		}
		else if (gen == 22)
		{
			letter = "v";
		}
		else if (gen == 23)
		{
			letter = "w";
		}
		else if (gen == 24)
		{
			letter = "x";
		}
		else if (gen == 25)
		{
			letter = "y";
		}
		else if (gen == 26)
		{
			letter = "z";
		}

		if (i == 0)
		{
			letter[0] = toupper(letter[0]);
			inName += letter;
		}
		else
		{
			inName += letter;
		}
	}
}

int main()
{
	srand(time(NULL));

	int userMenuSelection;
	string name;

	userMenuSelection = runTheMenu();
	generateTheName(name, userMenuSelection);

	cout << "Olivia's husband will be named " << name << "!" << endl;

	system("pause");
	return 0;
}