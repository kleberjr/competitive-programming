#include <bits/stdc++.h>

using namespace std;

int count_distinct(int n) {
	int arr[10] = { 0 };
	int count = 0;

	while (n) {
		int r = n % 10;
		arr[r] = 1;
		n /= 10;
	}

	for (int i = 0; i < 10; i++) {
		if (arr[i]) count++;
	}

	return count;
}

int count_digits(int n) {
	int c = 0;

	while (n) {
		int r = n % 10;
		c++;
		n /= 10;
	}

	return c;
}

int main() {
	int n;
  cin >> n;

  int next = n;
	while (next < 9999) {
		int distinct_digits = count_distinct(next + 1);
		int total_digits = count_digits(next + 1);

		if (distinct_digits == total_digits) {
			cout << next + 1;
      return 0;
		} else {
			next++;
    }
	}

	return 0;
}