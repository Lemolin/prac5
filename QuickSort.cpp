
#include"QuickSort.h"

using namespace std;

int QuickSort::position(vector<int> &list) {
    int high = list.size()-1;
    int pivot;
    if (high+1 > 3) {
        pivot = 3;
    }
    else {
        pivot = high;
    }
    int pivotValue = list[pivot];
    swap(list[pivot], list[high]);
    int p_position = 0;
    for (int i = 0; i < high; i++) {
        if (list[i] < pivotValue) {
            swap(list[i], list[p_position]);
            p_position++;
        }
    }
    swap(list[p_position], list[high]);
    return p_position;     //return the final position of the pivot
}

vector<int> QuickSort::sort(vector<int> list) {
    int high = list.size()-1;
    if (high+1 > 1) {
        int p = position(list);
        vector<int> left(list.begin(), list.begin() + p);
        vector<int> right(list.begin() + p + 1, list.end());
        left = sort(left);
        right = sort(right);
        left.push_back(list[p]);
        left.insert(left.end(), right.begin(), right.end());
        return left;
    }
    else {
        return list;
    }
}



