
#include<iostream>
using namespace std;

#define limit 500 
// here we are defining the limit for the array. 500 will be a good number to keep as large numbers will be a accomodated easily //

// The multiplication plays the main part in this method. As we know for large factorial even long long will not work so what we do is we store the values in an array as array can we as big as your spcae limit itself.
// Below we have a mul() which multiplies the values inside the array to the number we are have sent next in the factorial.
//Like for 4! = 1x2x3x4 similarly this does the same but inside an array because the size of the integer value is very large use of data type will not work.

int mul(int x, int sol_array[], int array_size)

// Here we are passing 3 arguments , X is the number we are trying to multiply with the previous result . sol_array is the array which stores the result of previous multiplication and array_size will denote the number of digits we have in our result as our array is 500 we need to locate our ending.
{
	int carry = 0; //Initializing carry to zero as usual

	
	for (int i=0; i<array_size; i++) // So here we are going to traverse the array
	{
		/// what we are doing here is , see how we multiply usually , 12223 x 46 where each integer is multiplied with each number but you can multiply the 46 with each numbeer in the multiplicant and also get the answer like 46*3, take the once place and rest is carry for the next so "carry + 2*46" and so on. Each of these once place element is stored in the array. 								
		int current = sol_array[i]*x + carry; 
		
		sol_array[i] = current % 10;	
		carry = current/10;
	}

	
	while (carry)
	{
		 // This loop is used to sepearte the last carry into array. If you have 455 as the last carry then this will split each one of them and place it in the array. This will happen till carry becomes zero.
		sol_array[array_size] = carry%10;
		carry = carry/10;
		array_size++;
	}
	return array_size;
}
void fact(int n)
{
	int sol_array[limit];
	// We are initializing the array with 1 as it is also the base case.
	//The size of the array is also defined to be 1.
	sol_array[0] = 1;
	int array_size = 1;


	
	for (int x=2; x<=n; x++)// This is the loop for n number we will be trying to multiply.
		array_size = mul(x, sol_array, array_size);

	cout << "The answer is \n";
	for (int i=array_size-1; i>=0; i--)
	// Here we are printing the array in the reverse order as the numbers are stored in the reverse order.
		cout << sol_array[i];
}
int main()
{
	int i;
	cout<<"Input a large number";
	cin>> i;
	fact(i);
	return 0;
}