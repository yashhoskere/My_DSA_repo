// Alice has been given two strings, A and B (each of length N) and Q queries.
// The strings contain only 0s and/or 1s.

// For every query, she is given an index i. She has to update the value at index i to 1 in string B and check if B is lexicographically equal to or larger than A or not.
// If yes, then she prints "YES" and if not, she prints "NO" (without quotes).

// Input format:

// 1. First line contains two space-separated integers N and Q.

// 2. Next line contains the string A.

// 3. Next line contains the string B.

// 4. Next Q lines contains an integer i (1 - based indexing)

// Output Format

// For each query, print the desired output in a new line.

// Constraints:

// 1 <= N,Q <= 106

// 1 <= i <= N 

// Note: You may use STL but try implementing Binary Search for practice.



#include<iostream>
#include<string>
using namespace std;



int main()
{

     long long int len, trial;
     cin>>len>>trial;
     string a,b;
     cin>>a>>b;
     char sol[len];
     int flag = 0;
     int done1 =0;
     int done2 =0;
     long long int change;
     long long int index1 = len;
    long long int index2 = len;
     for(int i = 0; i<len; i++)
     {
         if(a[i] == '0' && b[i] == '1')
         {
            
             sol[i] = '2';
             if(!done2)
                {
                    done2 = 1;
                    index2 = i;
                }
                continue;
         }
         else if(a[i] == '1' && b[i] == '0')
         {
             
             sol[i] = '1';
             if(!done1)
                {
                    done1 = 1;
                    index1 = i;
                }
                continue;
         }
         else{
             sol[i] = '0';
         }

     }

     while(trial--)
     {
         if(index1 > index2 )
         {
             cout<<"YES"<<endl;
             flag =1;
             continue;
         }

         cin>>change;

        if(b[change-1] == '1')
        {
            cout<<"NO"<<endl;
            continue;
        }
         if(index1 > change-1)
         {
             cout<<"YES"<<endl;
             flag =1;
             continue;
         }

         if(flag == 1)
         {
             cout<<"YES"<<endl;
             continue;
         }

         b[change-1] ='1';

        if(a[change-1] == '1'){
            sol[change-1] = '0';
        }
        else if(a[change-1] == '0'){
            sol[change-1] = '2';
        }

        if(index1 < change-1)
         {
             cout<<"NO"<<endl;
             continue;
         }
         
         else
         {
             if(a == b)
             {
                 cout<<"YES"<<endl;
                 flag =1;
                 continue;
             }
             while(sol[++index1] == '0');
             
                 if(sol[index1] == '1')
                 {
                     cout<<"NO"<<endl;
                     continue;
                 }
                 else
                 {
                     
                     cout<<"YES"<<endl;
                     flag =1;
                    continue; 
                 }
             
         }

     }


}
