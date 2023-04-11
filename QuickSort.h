#ifndef QUICKSORT_H
#define QUICKSORT_H
#include"Sort.h"

using namespace std;


class QuickSort :public Sort {
public:
	vector<int> sort(vector<int>list);

private:

	int position(vector<int>& list);

   

};


#endif
