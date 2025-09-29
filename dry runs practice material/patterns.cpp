#include<iostream>
using namespace std;


void ascending_pattern1(int rows)
{	
	int stars = 1;

	for (int i = 1; i <= rows; i++)
	{
		for (int j = 0; j < stars; j++)
		{
			cout << '*';
		}
		stars += 1;
		cout << endl;
	}
}

void ascending_pattern2(int rows)
{	
	int spaces = rows - 1;
	int stars = 1;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < spaces; j++)
		{
			cout << ' ';
		}

		for (int k = 0; k < stars; k++)
		{
			cout << '*';
		}

		cout << endl;
		spaces -= 1;
		stars += 1;
	}
}


void descending_pattern1(int rows)
{
	int stars = rows;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < stars; j++)
		{
			cout << '*';
		}

		cout << endl;

		//now start thinking about how many stars you need to print in next line
		stars -= 1;
	}
}

void descending_pattern2(int rows)
{
	int stars = rows;
	int spaces = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < spaces; j++)
		{
			cout << ' ';
		}

		for (int k = 0; k < stars; k++)
		{
			cout << '*';
		}

		cout << endl;
		spaces += 1;
		stars -= 1;
	}
}

void ascending_triangle(int rows)
{
	int spaces = rows - 1;
	int stars = 1;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < spaces; j++)
		{
			cout << ' ';
		}

		for (int k = 0; k < stars; k++)
		{
			cout << '*';
		}

		cout << endl;
		spaces -= 1;
		stars += 2;

	}

}

void descending_triangle(int rows)
{
	int spaces = 0;
	int stars = 2*rows - 1;

	

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < spaces; j++)
		{
			cout << ' ';
		}
		
		for (int k = 0; k < stars; k++)
		{
			cout << '*';
		}

		cout << endl;
		stars -= 2;
		spaces += 1;
	}
}

void half_diamond(int rows)
{
	int star = 1;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < star; j++)
		{
			cout << '*';

		}

		star += 1;
		cout << endl;
	}


	star = rows - 1;

	for (int i = 0; i < rows - 1; i++)
	{
		for (int j = 0; j < star; j++)
		{
			cout << '*';
		}
		star -= 1;
		cout << endl;
	}

}

void star_diamond(int rows)
{
	int star1 = rows;
	int spaces = 0;
	int star2 = rows;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < star1; j++)
		{
			cout << '*';
		}

		for (int k = 0; k < spaces; k++)
		{
			cout << ' ';
		}


		for (int l = 0; l < star2; l++)
		{
			cout << '*';
		}

		star1 -= 1;
		spaces += 2;
		star2 -= 1;
		cout << endl;
	}

	star1 += 1;
	spaces -= 2;
	star2 += 1;
	

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < star1; j++)
		{
			cout << '*';
		}

		for (int k = 0; k < spaces; k++)
		{
			cout << ' ';
		}


		for (int l = 0; l < star2; l++)
		{
			cout << '*';
		}

		star1 += 1;
		spaces -= 2;
		star2 += 1;
		cout << endl;
	}

	cout << "spaces = " << spaces << endl;
	cout << "stars = " << star1 << endl;
}


void hollow_diamond(int rows)
{
	int spaces1 = rows - 1;
	int spaces2 = 1;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < spaces1; j++)
		{
			cout << ' ';
		}

		cout << '*';

		if (i != 0)
		{
			for (int k = 0; k < spaces2; k++)
			{
				cout << ' ';
			}
			cout << '*';

			spaces2 += 2;
		}

		spaces1 -= 1;
		cout << endl;
	}

	spaces1 = 1;
	spaces2 -= 4;

	for (int i = 0; i < rows - 1; i++)
	{
		for (int j = 0; j < spaces1; j++)
		{
			cout << ' ';
		}
		cout << '*';

		if (i != rows - 2)
		{
			for (int k = 0; k < spaces2; k++)
			{
				cout << ' ';
			}
			cout << '*';
			spaces2 -= 2;
		}
		spaces1 += 1;

		cout << endl;
	}
}

int main()
{

	int rows;
	cout << "Enter rows: " << endl;
	cin >> rows;

	
	
	/*ascending_pattern1(rows);
	cout << endl;
	ascending_pattern2(rows);
	cout << endl;
	descending_pattern1(rows);
	cout << endl;
	descending_pattern2(rows);
	cout << endl;

	ascending_triangle(rows);
	cout << endl;
	descending_triangle(rows);
	cout << endl;*/


	//half_diamond(rows);
	//hollow_diamond(rows);
	star_diamond(rows);
	


	


	return 0;
}