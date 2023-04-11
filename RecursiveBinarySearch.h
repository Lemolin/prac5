#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include<vector>
#include"Sort.h"
using namespace std;

class RecursiveBinarySearch {
public:
	bool search(std::vector<int> list, int element);
private:
	bool Search(vector<int> list, int low, int high, int k);
};



#endif

