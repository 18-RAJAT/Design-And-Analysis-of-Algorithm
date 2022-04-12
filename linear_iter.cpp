/* GIVEN AN ARRAY OF NON-NEGATIVE INTEGER, DESIGN A LINEAR ALGORITHM AND IMPLEMENT IT USING A PROBLEM AND TO FIND WHETHER A KEY ELEMENT IS PRESENT IN ARRAY OR NOT. ALSO FIND THE NUMBEROF TOTAL COMPARISON FOR EACH INPUT CASE. */
#include<bits/stdc++.h>
#define f(i,a) for(int i=0;i<a;i++)
using namespace std;

int main()
{
   cout<<endl;
cout<<"Rajat joshi 20011595 - G \t"<<"\n";
int n=0,key,counter=0;
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

f(i,n)
{
if(key==arr[i])
{
cout<<"Element found"<<endl;
cout<<"Element position is : " <<(i+1)<<endl;
counter++;
}
}

if(counter==0)
{
cout<<"Element not found"<<endl;
}

return 0;
}
