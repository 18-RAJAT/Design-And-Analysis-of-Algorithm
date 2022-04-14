#include<bits/stdc++.h>
using namespace std;


void heapify(vector<int>& heap,int current,int size)
{
	int largest = current;

	int left = 2* current + 1; //Left child

	int right = 2* current + 2; //Right child

	if(left < size and heap[left] > heap[largest])
	{
		largest = left;
	}

	if(right < size and heap[right] > heap[largest])
	{
		largest = right;
	}

	if(largest != current)
	{
		int temp = heap[current];
		heap[current] = heap[largest];
		heap[largest] = temp;

		heapify(heap,largest,size);
	}
}

void heapSort(vector<int>& heap)
{
	//Build heap (rearrange array)

	for(int i=heap.size()/2-1;i>=0;--i)

		heapify(heap,i,heap.size());

	for(int i=heap.size()-1;i>0;--i)
	{
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;

		heapify(heap,0,i);
	}
}

int main()
{
	vector<int> heap{9,6,8,2,1,4,3}; //MAX HEAP

	heapSort(heap);

	cout<<"Heap in Asc order :\t";

	for(int i=0;i<heap.size();++i)
	{
		cout<<heap[i]<<"\t";
	}
	cout<<endl;
}
