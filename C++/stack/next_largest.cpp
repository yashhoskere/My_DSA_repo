#include <iostream>
#include<stack>
using namespace std;

int main() {
	int size;
	cin >> size;	
	int arr[size];								
	for(int i =0 ; i<size ; i++){
		cin>>arr[i];
	}		

	stack<int> s;
	for(int i =0 ; i<size;i++){
		while( s.empty() == false && arr[s.top()] < arr[i] ){
			
			arr[s.top()] = arr[i];
			s.pop();
		
		}
		if(s.empty()==true)
		{
			s.push(i);
		}
		else if( arr[s.top()] >= arr[i]){
			s.push(i);
		}
	}
	if(s.empty() == false){
		while(s.empty() == false){
			arr[s.top()] = -1;
			s.pop();
		}
	}
	for(int i =0 ; i<size;i++){
		cout<<arr[i]<<" ";
	}
}