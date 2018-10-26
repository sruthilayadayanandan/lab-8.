//including the library
#include<iostream>
using namespace std;

// function for arranging the array elements
void arrange (int a[],int b)
{	int k,l,i;
 	
	//loop for arranging the array elements in ascending order
 	do
 	{	k=0;
		for(i=0;i<(b-1);i++)
   		{	if (a[i]>a[i+1])
    			{ l=a[i];
     			  a[i]=a[i+1];
    			  a[i+1]=l;
     			  k+=1;
			}
		}
	}while(k!=0);
      
}

// function for printing nth maximum and nth minimum element of array
void nlarge(int a[],int b,int n)
{ cout<<"The "<< n<<"th largest element is "<<a[b-n];
   }
void nsmall(int a[],int b,int n)
{ cout<<" The "<< n<<"th smallest element is "<<a[n-1];
   }

//using main function 
int main()
{	int a[10],b,n;
 	
	//asking user for the limit
	cout<<" Enter number of elements in the array ";
 	cin>>b;
 	
	//asking user for array elements 
	cout<<" Enter array elements ";
 	for(int i=0;i<b;i++)
  	cin>>a[i];
 	
	//calling the function to arrange elements in order
	arrange (a,b);
	
	//asking user for the value of n
	cout<<" value of n is ";cin>>n;
	
	//calling functions for n th largest and smallest elements
	nlarge(a,b,n);
	nsmall(a,b,n);
	cout<<endl;
	 return 0;
}