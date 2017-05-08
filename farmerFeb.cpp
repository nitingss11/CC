#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    int i;
  bool isPrime = true;

  for(i = 2; i <= sqrt(n); ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }

  return isPrime;
}

int main()
{
   int t,x,y,sum,z;
   cin>>t;
   int temp=t;
   int* p= new int[t];

  if(t>=1 && t <=1000)
 {
   while (t)
   {
   		cin>>x;
   		cin>>y;
   		if(x>=1 && y>=1 && x<=1000 && y<=1000)
   		{

   			sum=x+y;
	   		sum++;
	   		while(!isPrime(sum))
	   		sum++;

	   		z=sum-x-y;
	   		//cout<<z<<endl;
	   		--t;
	   		p[t]=z;

	   	}
   }

  }

  for(int i=temp-1; i>-1; i--)
   	  {
   	  	cout<<p[i]<<endl;
   	  }

  delete[] p;
}
