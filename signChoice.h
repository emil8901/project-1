#pragma once 

void signChoice(int variable, int &number)
{
	int modulo;

	cout << "Wybierz znak, którym ma być narysowana figura, podając numer zawarty w nawiasie:\n\n";

	for (int i = 33; i < 127; i++)                          // wypisanie znaków ASCII w konsoli
	{
		modulo = variable % 10;

		if (variable < 10)
		{
			if (modulo == 0)
			{
				cout << char(i) << "  " << "(" << variable << ") " << endl;
			}
			else
			cout << char(i) << "  " << "(" << variable << ") ";			
		}
		else if (modulo == 0 && variable >= 10)
		{
			cout << char(i) << " " << "(" << variable << ") " << endl;
		}
		else
		cout << char(i) << " " << "(" << variable << ") ";

		variable++;
	}

	cout << "\n\nPodaj numer: ";

	cin >> number;

	while (number > 94 || number < 1)                          // kontrola wprowadzanych danych
	{
		cin.clear();
		cin.ignore(1000, '\n');
		variable = 1;
		system("cls");
		signChoice(variable, number);		
	}

	system("cls");

}
