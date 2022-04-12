/*Q4. Given a sorted array of +ve integer containing few duplicate element, design a algorithm and implement it using a program and to find whether a key element is present or not. If present than also find how many number of copies present.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{ cout<<endl;
cout<<"Mayank - Mishra 20011595 - G\n"<<"\n";

int num,key,counter=0,n,dSize=0;
cout<<"Enter the number of elements to enter : ";
cin>>n;
vector<int> v1;

for(int i=0;i<n;i++)
{
cin>>num;
v1.push_back(num);
}
cout<<"Enter the key to search : ";
cin>>key;
sort(v1.begin(),v1 .end());
int low=0,high=v1.size(),mid=0;
while(low<=high)
{
mid=(low+high)/2;
if(v1[mid]==key)
{
cout<<"Element Found"<<endl;
counter++;
dSize++;
break;
}
else if(key>v1[mid])
    low=mid+1;
else
    high=mid-1;
}

if(counter==0)
    cout<<"Element not Found"<<endl;
else {
int pres1=mid-1;
int pres2=mid+1;
while(counter)
{
if(v1[pres1]!=key)
    break;
dSize++;

pres1--;
}
while(counter)
{
if(v1[pres2]!=key)
    break;
dSize++;
pres2++;
}

cout<<"No of duplicates are " <<dSize<<endl;

}
return 0;

}
