 #include<iostream>
 using namespace std;


int insertion_sort(int a[] ,int n)
{
    int i,j,temp;
        for(i = 1 ; i < n ; i++ )
        {
            j = i -1;
            temp = a[i];
            while( a[j] > temp && j >=0 )
            {
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = temp;
            
        }
    

}

int main()
{
    int size ,a[10], i;  
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the no. in the array"<<endl;
    for(i = 0 ; i < size ; i++)
    {
        cin>>a[i];
    }
    cout<<"you have entered all the numbers !"<<endl;
    insertion_sort( a , size);
    for(i = 0 ; i < size ; i++)
    {
        cout<<a[i]<<endl;
    }

}