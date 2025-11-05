#include "algorithms.h"
#include <string>
using namespace std;

int binarysearch(int item, vector<int>sortedarray) {
	int low = 0;
	int high = sortedarray.size();
	
	int med = -1;
	int guess = -1;
	while (low<=high) {
		med = (low + high) / 2;
		guess = sortedarray[med];
		if (guess == item) {
			return med;
		}
		else if (guess > item) {
			high = med;
		}
		else {
			low = med;
		}

	}
	return -10;
}