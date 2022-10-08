
#include <iostream>
using namespace std;

#define M 5

void fill_matrix( float a[M][M] , int , int );

void Display_matrix(float a[][M], int );

int Gauss_jordan(float a[][M], int );

void output(float a[][M], int , int );

int Solution_type(float a[][M], int n, int );




int main()
{
	float a[M][M] = {{1, 0, 0,0,  232}, /// Here we can take custom inputs *********
					 {0, 0, 1,0, 132},
					 {-1, 1, 0,-1  ,0},
					 {0,1,-1,0,250}};

	int n =4 ;
	// cout<<"Enter order of matrix : ";
	// cin>>n;
	int flag = 0;
	// int  row , column;
	// cin>>row>>column;
	// float a[M][M];
	
    // fill_matrix(a,  row,  column);

	
	flag = Gauss_jordan(a, n);

	if (flag == 1)
		flag = Solution_type(a, n, flag);

	
	cout << "Final Augumented Matrix is : " << endl;
	Display_matrix(a, n);
	cout << endl;

	output(a, n, flag);

	return 0;
}


void fill_matrix(float a[M][M], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= column; j++)
        {
            cout << "Enter the value for a " << i << " " << j << endl;
            cin >> a[i][j];
        }
    }
}

void Display_matrix(float a[][M], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

int Gauss_jordan(float a[][M], int n)
{
	int i, j, k = 0, c, flag = 0, m = 0;
	float pro = 0;

	for (i = 0; i < n; i++)
	{
		if (a[i][i] == 0)
		{
			c = 1;
			while ((i + c) < n && a[i + c][i] == 0)
				c++;
			if ((i + c) == n)
			{
				flag = 1;
				break;
			}
			for (j = i, k = 0; k <= n; k++)
				swap(a[j][k], a[j + c][k]);
		}

		for (j = 0; j < n; j++)
		{
			if (i != j)
			{
				float pro = a[j][i] / a[i][i];

				for (k = 0; k <= n; k++)
					a[j][k] = a[j][k] - (a[i][k]) * pro;
			}
		}
	}
	return flag;
}

void output(float a[][M], int n, int flag)
{
	cout << "Result is : ";

	if (flag == 2)
		cout << "Infinite Solutions Exists" << endl;
	else if (flag == 3)
		cout << "No Solution Exists" << endl;

	else
	{
		for (int i = 0; i < n; i++)
			cout << a[i][n] / a[i][i] << " ";
	}
}

int Solution_type(float a[][M], int n, int flag)
{
	int i, j;
	float sum;
	flag = 3;
	for (i = 0; i < n; i++)
	{
		sum = 0;
		for (j = 0; j < n; j++)
			sum = sum + a[i][j];

		if (sum == a[i][j])
			flag = 2;
	}
	return flag;
}

1 1 1 23
2 3 1 64
0 0 0 0