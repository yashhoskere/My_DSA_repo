// #include <iostream>
// #include <string>
// #include <stack>
// using namespace std;
// int main()
// {
// 	int cases;
// 	cin >> cases;
// 	while (cases--)
// 	{
// 		stack<char> st;
// 		string s;
// 		int i = 0;
// 		cin >> s;
// 		int k = s.length();

// 		while (k--)
// 		{

// 			if (s[i] == ')')
// 			{
// 				if (!st.empty() && st.top() == '(')
// 				{
// 					st.pop();
// 					i++;
// 				}
// 				else
// 				{
// 					cout << "NO" << endl;
// 					break;
// 				}
// 			}
// 			else if(s[i] == '}')
// 			{
// 				if (!st.empty() && st.top() == '{')
// 				{
// 					st.pop();
// 					i++;
// 				}
// 				else
// 				{
// 					cout << "NO" << endl;
// 					break;
// 				}
// 			}
// 			else if (s[i] == ']')
// 			{
// 				if (!st.empty() && st.top() == '[')
// 				{
// 					st.pop();
// 					i++;
// 				}
// 				else
// 				{
// 					cout << "NO" << endl;
// 					break;
// 				}
// 			}

// 			else
// 			{
// 				st.push(s[i]);
// 				i++;
// 			}
// 		}

// 		if (st.empty() == true)
// 		{
// 			cout << "YES" << endl;
// 		}
// 		else
// 		{
// 			cout << "NO" << endl;
// 		}
// 	}
// }


#include<iostream>
#include<string>
#include<stack>
using namespace std;

void balance(int k, string s, stack<char> st){
	
	

}

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		string s;
		stack<char> st;
		cin>>s;
		int i =0;
		int k = s.length();
		int done =0;
		while(k--)
			{
			if(s[i] == ')'){
				 if(!st.empty() && st.top() == '('){
					st.pop();
					i++;
					}
					else{
						st.push(s[i]);
						done =1;
						cout<<"NO"<<endl;
						break;
					}
			}
			else if(s[i] == '}'){
				 if(!st.empty() && st.top() == '{'){
					st.pop();
					i++;
					}
					else{
						st.push(s[i]);
						done =1;
						cout<<"NO"<<endl;
						break;
					}
			}
			else if(s[i] == ']'){
				 if(!st.empty() && st.top() == '['){
					st.pop();
					i++;
					}
					else{
						st.push(s[i]);
						done =1;
						cout<<"NO"<<endl;
						break;
					}
			}
			else{
				st.push(s[i]);
				i++;

			}
		}
		if(st.empty() == true ){
			cout<<"YES"<<endl;
		}
		else if(!done)
		{
			cout<<"NO"<<endl;
		}
		
		
	}
	return 1;
}