/* GIVEN AN ALREADY SORTED ARRAY OF POSITIVE INTEGER, DESIGN A BINARY ALGORITHM AND IMPLEMENT IT USING A PROBLEM AND TO FIND WHETHER A KEY ELEMENT IS PRESENT IN ARRAY OR NOT. ALSO FIND THE NUMBEROF TOTAL COMPARISON FOR EACH INPUT CASE. */
#include<bits/stdc++.h>
#define f(i,a) for(int i=0;i<a;i++)
using namespace std;

void binary_search(int arr[],int low,int mid,int high,int key)
{
static int counter=0;
if(low>=high)
{
cout<<"Element not Found"<<endl;
counter++;
return;
}
else if(arr[mid]==key)
{
cout<<"Element Found"<<endl;
return;
}
else if(arr[mid]>key)
{
high=mid-1;

}
else if(arr[mid]<key)
{
low=mid+1;
}
mid=(low+high)/2;
binary_search(arr,low,mid,high,key);

}

int main()
{     cout<<endl;
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
int low=0,high=n;
int mid=(low+high)/2;

binary_search(arr,low,mid,high,key);
return 0;
}
