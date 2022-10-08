#include<iostream>
using namespace std;



int main(){
	int students;
	cin>>students;
	int a[students];
	for(int p =0; p<students;p++){
		cin>>a[p];
	}
	int sol[students];
	 sol[0] =1;
	 int i =1;
	 while(i<students)
	{
		while(i<students && a[i] > a[i-1])
			{
				sol[i] = sol[i-1]+1;
				i++;
			}
		while(i<students && a[i]==a[i-1])
			{
				sol[i] =1;
				i++;
				
			}
		if(i<students && a[i]<a[i-1])
		{
			int j =i , count =0;
			while(j<students && a[j]<a[j-1])
			{
				count++;
				j++;
			}
			if(sol[i-1] <= count)
			{
				sol[i-1] += count - sol[i-1] +1;
			}
			while(i<students && count)
			{
				sol[i] = count--;
				i++;
			}

		}
	}
	int sum = 0;
	for(int i = 0; i<students;i++){
		sum += sol[i];
	}

	cout<<sum<<endl;


}
