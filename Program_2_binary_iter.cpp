/* GIVEN AN ALREADY SORTED ARRAY OF POSITIVE INTEGER, DESIGN A BINARY ALGORITHM AND IMPLEMENT IT USING A PROBLEM AND TO FIND WHETHER A KEY ELEMENT IS PRESENT IN ARRAY OR NOT. ALSO FIND THE NUMBEROF TOTAL COMPARISON FOR EACH INPUT CASE. */
#include<bits/stdc++.h>
#define f(i,a) for(int i=0;i<a;i++)
using namespace std;

int main()
{
   cout<<endl;
cout<<"Mayank - Mishra 20011595 - G\n"<<"\n";
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

int low=0,high=n,mid;

while(low<=high)
{
int mid=(low+high)/2;

if(arr[mid]==key)
{
cout<<"Element Found"<<endl;
counter++;
break;
}
else if(arr[mid]>key)
{
high=mid-1;
}
else if(arr[mid]<key)
{
low=mid+1;
}
}

if(counter==0)
{
cout<<"Element not Found "<<"\n";
}


return 0;
}