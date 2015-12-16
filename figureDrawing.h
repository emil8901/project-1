#pragma once 

void gotoxy(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void figureDrawing(int width, int height, int &number, int j, int k)
{		

	int l = j;  // zmienna pomocnicza

	for (int i = 1; i <= width; i++)                            // rysowanie dolnej linii
	{
		gotoxy(i + 2 * width + 10 + j, 30 - (height / 2) + k);
		cout << char(32 + number);
	}	

	for (int i = 1; i <= width / 2; i++)                            // rysowanie pionowych linii
	{
		gotoxy(2 * width + 10 + j, 31 - (height / 2) - i + k);
		cout << char(32 + number);
		gotoxy(3 * width + 10 + j, 31 - (height / 2) - i + k);
		cout << char(32 + number);
	}

	for (int i = 1; i <= width / 2; i++)                            // rysowanie poziomych linii
	{
		gotoxy(2 * width + 11 - i + j, 31 - height + k);
		cout << char(32 + number);
		gotoxy(3 * width + 9 + i + j, 31 - height + k);
		cout << char(32 + number);
	}

	for (int i = 1, j = 1; i <= width / 2, j <= width / 2; i+=2, j++)                       // rysowanie grotu
	{	
		gotoxy(2 * width + 11 + i - (width / 2) + l, 31 - height - j + k);
		cout << char(32 + number);
		gotoxy(3 * width + 9 - i + (width / 2) + l, 31 - height - j + k);
		cout << char(32 + number);	
	}

}


