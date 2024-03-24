// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int count = 0;
	int left = 0, righ = size - 1;
	while (left <= righ) {
		int mid = righ / 2;
		if (arr[righ] == value) {
			int a = righ - 1;
			while (a >= 0 && arr[a] == value) {
				count++;
				a--;
			}
			return count;
		}
		if (arr[mid] == value) {
			count++;

			int a = mid - 1;
			while (a >= 0 && arr[a] == value) {
				count++;
				a--;
			}
			a = mid + 1;
			while (a < size && arr[a] == value) {
				count++;
				a++;
			}
			return count;
		}
		else if (arr[mid] < value) {
			left = mid + 1;
		}
		else {
			righ = mid - 1;
		}
	}
	return count;

}
