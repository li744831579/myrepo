#include<iostream>
using namespace std;
int main()
{

	int *p = new int[4];
	int *q =new int[4];
	static int m=10;
	int n=20;
	int *a=NULL;
	a=&n;
	int **b=NULL;
	b=&(a);
	cout<<"&n="<<&n<<endl;
	cout<<"a="<<a<<endl;
	cout<<"&a="<<&a<<endl;
	cout<< "b = "<<b<<endl;
	cout<<"&(*b)="<<(&(*b))<<endl;
	cout <<"*b="<<(*b)<<endl;
	cout<<"**b="<<(**b)<<endl;
		







	 int *k = NULL;
	 k=&n;
	cout << "p="<<p
		<<"\t&p="<<&p
		<<"\t&m="<<&m
		<<"\t&n="<<&n
		<<"\tq="<<q
		<<"\tk="<<k
		<<"\t&k="<<&k<<endl;
	cout <<"&m-p"<< (&m-p)<<endl;
	return 0;
}
