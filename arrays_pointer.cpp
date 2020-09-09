#include <iostream>

using namespace std;

int main()
{	
	cout<<"--------------------"<<endl;
	cout<<"Array with Pointers"<<endl;
	cout<<"--------------------"<<endl;
	
	
	int myarray[5] = {11,53,13,44,63};	
	
	cout<<"Value of array at 0 index"<<endl;
	cout<<myarray[0]<<endl;
	cout<<"Address of array at 0 index"<<endl;
	cout<<&myarray[0]<<endl;
	cout<<"Address of array at 1 index"<<endl;
	cout<<&myarray[1]<<endl;
	cout<<"Address of array at 2 index"<<endl;
	cout<<&myarray[2]<<endl;
	cout<<"Address of array without using index"<<endl;
	cout<<myarray<<endl;
	
	cout<<"-----------------------"<<endl;
	cout<<"Array with Pointers New"<<endl;
	cout<<"-----------------------"<<endl;
	
	
	
	int *anyPointer;
	anyPointer = &myarray[1];
	cout<<"Address part of anyPointer"<<endl;
	anyPointer = anyPointer + 1;
	cout<<anyPointer<<endl;
	cout<<"Value part of anyPointer"<<endl;
	cout<<*anyPointer<<endl;


							
	return 0;
}
