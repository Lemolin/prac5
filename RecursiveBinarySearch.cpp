#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(vector<int> list, int k) {
    return Search(list,  0, list.size() - 1,k);
}

bool RecursiveBinarySearch::Search(vector<int> list, int low,int high,int k) {
    if (low > high) {
        return false;
    }
    int mid = low + (high - low) / 2;
    if (k==list[mid]) {
        return true;
    }
    else if (list[mid] < k) {
        return Search(list, mid+1,high,k);
    }
    else if (list[mid] > k) {
        return Search(list, low,mid-1,k);
    }
    return true;
}