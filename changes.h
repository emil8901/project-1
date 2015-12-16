#pragma once

void changes(int &width, int &height, int number, int &j, int &k)
{	

	char sign = getch();

	while (sign != 27)
	{		
		
		int left = 2 * width + 11 + j - (width / 2);
		int right = 90 - (3 * width + j + (width / 2));
		int up = 31 - 1.5 * height + k;
		int down = height / 2 - 1 - k, u, r;

		switch (sign)
		{
	
			case 43:
			{
				if (width < 20)                                                               // powiększenie figury
				{
					if (left <= 2 && up < 2)
					{
						r = 3 - left;
						u = 3;
						system("cls");
						figureDrawing(width += 2, height += 2, number, j -= r, k += u);
					}
					else if (left <= 2 && down < 2)
					{
						r = 3 - left;
						u = 1;
						system("cls");
						figureDrawing(width += 2, height += 2, number, j -= r, k += u);
					}
					else if (left <= 2)
					{
						r = 3 - left;
						u = 1;
						system("cls");
						figureDrawing(width += 2, height += 2, number, j -= r, k += u);
					}
					else if (right > 6 && up > 2 && down > 2)
					{
						u = 1;
						system("cls");
						figureDrawing(width += 2, height += 2, number, j -= 4, k += u);
					}
					else if (right <= 6 && down <= 2)
					{
						r = 7 - right;
						u = 1;
						system("cls");
						figureDrawing(width += 2, height += 2, number, j -= r, k += u);
					}
					else if (right <= 6 && up <= 2)
					{
						r = 7 - right;
						u = 3;
						system("cls");
						figureDrawing(width += 2, height += 2, number, j -= r, k += u);
					}
					else if (up <= 2)
					{
						u = 3 - up;
						system("cls");
						figureDrawing(width += 2, height += 2, number, j -= 4, k += u);
					}
					else if (down <= 2)
					{
						u = 1;
						system("cls");
						figureDrawing(width += 2, height += 2, number, j -= 4, k += u);
					}
					else if (right <= 6)
					{
						r = 7 - right;
						u = 1;
						system("cls");
						figureDrawing(width += 2, height += 2, number, j -= r, k += u);
					}
				}

			}
			break;
			case 45:
			{
				if (width > 6)
				{

					if (left <= 2 && up < 2)
					{
						r = 3 - left;
						u = 3;
						system("cls");
						figureDrawing(width -= 2, height -= 2, number, j += r, k -= u);
					}
					else if (left <= 2 && down < 2)
					{
						r = 3 - left;
						u = 1;
						system("cls");
						figureDrawing(width -= 2, height -= 2, number, j += r, k -= u);
					}
					else if (left <= 2)
					{
						r = 3 - left;
						u = 1;
						system("cls");
						figureDrawing(width -= 2, height -= 2, number, j += r, k -= u);
					}
					else if (right > 6 && up > 2 && down > 2)
					{
						u = 1;
						system("cls");
						figureDrawing(width -= 2, height -= 2, number, j += 4, k -= u);
					}
					else if (right <= 6 && down <= 2)
					{
						r = 7 - right;
						u = 1;
						system("cls");
						figureDrawing(width -= 2, height -= 2, number, j += r, k -= u);
					}
					else if (right <= 6 && up <= 2)
					{
						r = 7 - right;
						u = 3;
						system("cls");
						figureDrawing(width -= 2, height -= 2, number, j += r, k -= u);
					}
					else if (up <= 1)
					{
						u = 2 - up;
						system("cls");
						figureDrawing(width -= 2, height -= 2, number, j += 4, k -= u);
					}
					else if (down <= 2)
					{
						u = 1;
						system("cls");
						figureDrawing(width -= 2, height -= 2, number, j += 4, k -= u);
					}
					else if (right <= 6)
					{
						r = 7 - right;
						u = 1;
						system("cls");
						figureDrawing(width -= 2, height -= 2, number, j += r, k -= u);
					}
				}
			}
			break;
			case 72:
			{
				if (31 - 1.5 * height + k > 0)
				{
					system("cls");
					figureDrawing(width, height, number, j, k -= 1);             // przesunięcie figury do góry
				}
			}
			break;
			case 75:
			{
				if (2 * width + 11 + j - (width / 2) > 0)
				{
					system("cls");
					figureDrawing(width, height, number, j -= 1, k);             // przesunięcie figury w lewo
				}                       
			}
			break;
			case 77:
			{
				if (90 - (3 * width + j + (width / 2)) > 0)
				{
					system("cls");
					figureDrawing(width, height, number, j += 1, k);             // przesunięcie figury w prawo
				}
			}
			break;
			case 80:
			{
				if (height / 2 - 1 - k > 0)
				{
					system("cls");
					figureDrawing(width, height, number, j, k += 1);             // przesunięcie figury ku dołowi
				}
			}
			break;			

		}

		sign = getch();

	} 

}
