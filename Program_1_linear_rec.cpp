/* GIVEN AN ARRAY OF NON-NEGATIVE INTEGER, DESIGN A LINEAR ALGORITHM AND IMPLEMENT IT USING A PROBLEM AND TO FIND WHETHER A KEY ELEMENT IS PRESENT IN ARRAY OR NOT. ALSO FIND THE NUMBEROF TOTAL COMPARISON FOR EACH INPUT CASE. */
#include<bits/stdc++.h>
#define f(i,a) for(int i=0;i<a;i++)
using namespace std;

void searching(int arr[],int n, int search)
{
static int i=0 ,counter=0;
if(arr[i]==search)
{
cout<<"Element found"<<endl;
cout<<"Element position is : " <<(i+1)<<endl;
counter++;
}
else if(i==n)
{
cout<<"Element not found"<<endl;
counter++;
}
else if(counter!=0)
{
return ;
}
else
{
i++;
searching(arr,n,search);
}

}

int main()
{
    cout<<endl;
cout<<"Rajat joshi 20011595 - G \t"<<"\n";
int n=0,key;
cout<<"Enter the total number to enter : "<<"\n";
cin>>n;
int arr[n];
f(i,n)
{
cout<<"Enter no "<<(i+1)<<" : ";
cin>>arr[i];
}

printf("Enter the number to search : ");
cin>>key;
searching(arr,n,key);

return 0;
}
