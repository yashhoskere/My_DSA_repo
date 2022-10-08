// #include<iostream>
// #include<cmath>
// using namespace std;

// int main()
// {
// int shift_candy,added = 0,removed = 0;
// cin>>shift_candy;
// int candies,sum =0;
// cin>>candies;
// int arr[candies];
// 	for(int i =0; i<candies ; i++)
// 		{
// 			cin>>arr[i];
// 			sum+=arr[i];
// 		}
// 	if(ceil(float(sum)/float(candies)) == floor(float(sum)/float(candies)))
// 	{ 
// 		int x =sum/candies;
// 		for(int j =0 ; j<candies ; j++)
// 		{
// 			int a1 = abs(arr[j]-x);
// 			int a2 = a1/shift_candy;
// 			if(ceil(a2) == floor(a2))
// 			{
// 				if(arr[j]-x > 0)
// 				{
// 					removed += a2;
// 				}
// 				else if(arr[j]-x < 0)
// 				{
// 				added += a2;
// 				}
// 				if(arr[j]-x == 0)
// 				{
// 					cout<<"-1"<<endl;
// 					return 0;
// 				}
// 			}
// 			else
// 				{
// 				cout<<"-1"<<endl;
// 				return 0;
// 				}
// 		}
// 		if(removed == added)
// 		{
// 			cout<<added<<endl;
// 			return 0;
// 		}
// 	}
// 	else
// 	{
// 		cout<<"-1"<<endl;
// 		return 0;
// 	}
// }

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int cases,added = 0,removed = 0;
cin>>cases;
while(cases--){
int candies,sum =0;
cin>>candies;
int arr[candies];
int same = 0;
	for(int i =0; i<candies ; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
            if(i >=1 && arr[i] != arr[i-1]){
                same =1;
            }
			
		}
		if(same == 0)
        {
			cout<<"0"<<endl;
			continue;
		}
	if(ceil(float(sum)/float(candies)) == floor(float(sum)/float(candies)))
	{ 
		int x =sum/candies;
		int j;
		for(j =0 ; j<candies ; j++)
		{
			int a1 = abs(arr[j]-x);
				if(arr[j]-x > 0)
				{
					removed += a1;
				}
				else if(arr[j]-x < 0)
				{
				added += a1;
				}
				if(arr[j]-x == 0)
				{
					cout<<"-1"<<endl;
					break;
				}
			
			
		}
        if(arr[j]-x == 0)
				{
					continue;
				}
		if(removed == added)
		{
			cout<<added<<endl;
			continue;
		}
	}
	else
	{
		cout<<"-1"<<endl;
		continue;
	}
}
}
