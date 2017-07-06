#include <iostream>
#include "ZBlock.h"
#include "Oblock.h"
#include <new>
using namespace std;
typedef std::bad_alloc xalloc;
int main()
{
	Z_Block z;
	z.paint();
	z.rotate();
	z.paint();
	z.right();
	z.paint();
	z.right();
	z.rotate();
	z.paint();
	O_Block o;
	o.paint();
	o.rotate();
	o.paint();
	o.right();
	o.paint();
	o.right();
	o.rotate();
	o.paint();
	double *ptr[50];
	try{
		for (int i = 0; i < 50; ++i)
		{
			ptr[i] = new double[50000000];
			cout << "ptr[" << i << "] new success\n";
		}
	}
	catch (xalloc){
		cout << "°O¾ÐÅé¤£¨¬\n";
	}
 return 0;
 }
