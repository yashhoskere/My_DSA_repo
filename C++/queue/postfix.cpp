#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;


int main(){
	long long cases;
	cin>>cases;
	cin.ignore();

	for(int j = 0 ; j<cases ; j++){
		stack<int> s;
		string input;
		getline(cin,input);
		float a ;
		float b ;
		int i =0;
		while(input[i] != '?'){

if(input[i] =='+' || input[i] =='-' ||input[i] =='*' ||input[i] =='/' || input[i] == '$' ){
				a = s.top();
				s.pop();
				b= s.top();
				s.pop();
				switch(input[i]){
					case '+':
						s.push(b+a);
						i++;
						break;
						
					case '-':
						s.push(b-a);
						i++;
						break;
						
					case '*':
						s.push(b*a);
						i++;
						break;
											
					case '/':
						s.push(b/a);
						i++;
						break;
					case '$':
						s.push(pow(b,a));
						i++;
						break;
						
						}
}
else{
	string word="";
	stringstream sso;
	while(input[i] != ' '){
		word += input[i];
		i++;
	}
	sso<<word;
	int k;
	sso>>k;
	s.push(k);
}
				
				i++;
			}
			
		cout<<(int)(s.top());
		s.pop();
		cout<<endl;
		}
	}

