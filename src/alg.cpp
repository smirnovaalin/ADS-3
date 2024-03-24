// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0, left = 0, righ = size - 1;
  while (left < righ) {
    int mid = (left + righ) / 2;
		if (arr[mid] == value) {
			count++;
		if (arr[mid + 1] == value) {
				mid += 1;
		while (arr[mid] == value) {
				count++;
				mid++;
				}
		}
		if (arr[mid - 1] == value) {
				mid -= 1;
		    while (arr[mid] == value) {
				    count++;
					  mid--;
				}
		} else if (arr[mid] > value) {
				righ = mid - 1;
			     } else {
				        left = mid + 1;
			       }
	}
	}
	return count;
}
