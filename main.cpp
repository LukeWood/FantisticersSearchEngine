#include <iostream>
#include "binarytree.h"
using std::cout;
int main()
{
	binarytree<int> btree;
	btree.insert(0);
	btree.insert(1);
	btree.insert(-1);
	return 0;
}
