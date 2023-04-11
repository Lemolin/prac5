#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include"Sort.h"
#include"BubbleSort.h"
#include"QuickSort.h"
#include"RecursiveBinarySearch.h"
using namespace std;


int main() {
    string input;
    getline(cin, input);
    vector<int> list;


    int num;
    stringstream s1(input);

    while (s1 >> num) {
        list.push_back(num);
    }

    QuickSort s2;
    list = s2.sort(list);
    
    RecursiveBinarySearch s3;
    if (s3.search(list, 1)) {
        cout << "true" << " ";
    }
    else {
        cout << "false" << " ";
    }

    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << " ";
    }
    cout << endl;

    return 0;
}