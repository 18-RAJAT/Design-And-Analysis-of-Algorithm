/*/GIVEN AN SORTED ARRAY OF POSITIVE INTEGRS, DESIGN AN ALGORITHM AND IMPLIMENT IT USING A PROGRAM TO FIND WHETHER A GIVEN KEY IS PRESENT IN AN ARRAY OR NOT FOR AN ARRAY ARR[N]. SEARCH THE INDICES OF AR[0], AR[2], AR[4], _ _ _ _ AR[2^K] AND SO ON. ONCE THE INTERVAL (ARR[2^K]<ITEM < AR[2^K+1]) IS FOUND, PERFORM A LINEAR SEARCH OPERATION FROM INDEX 2^K TO THE KEY ELEMENT,/*/
#include<bits/stdc++.h>
using namespace std;
#define f(i,a) for(int i=0;i<a;i++)

int
main ()
{   cout<<endl;
cout<<"Mayank - Mishra 20011595 - G\n"<<"\n";

  int n = 0, counter = 0, counter2 = 0,key=0,index=0;
    cout << "Enter the number of element to enter : ";
  cin >> n;

  vector < int >v1;

  f (i, n)
  {
    int num = 0;
    cin >> num;
    v1.push_back (num);
  }
  cout << "Enter the key to search" << endl;
  cin>>key;

  f (i, n)
  {
     index = pow (2, i);

    if (v1[index] == key)
      {
	cout << "Element Found at position " << ( index+1) << endl;
	counter++;
	break;
      }
    else if (v1[index] > key)
      {
	counter = 2;
	break;
      }


  }

  if (counter == 2)
    {
    counter=0;
      for (int i = pow (2, counter2 - 1); i < index; i++)
	   {
	   if (v1[i] == key)
	   {
	   cout << "Found at position " << (i + 1) << endl;
	   counter++;
	   break;
	      
	   }
	   }
    }
    
    if(counter==0)
        cout<<"Element not Found"<<endl;
    
    return 0;
}
