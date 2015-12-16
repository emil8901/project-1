#pragma once 

void initialSize(int &width, int &height)
{	
	cout << "Podaj rozmiar figury (min. 6, max. 20): ";

	cin >> width;
	height = width;
	
	while (width < 6 || width > 20)               // kontrola wprowadzanych danych
	{
		cin.clear();
		cin.ignore(1000, '\n');
		system("cls");
		initialSize(width, height);
	}

	system("cls");

}
