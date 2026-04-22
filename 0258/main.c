#include <stdio.h>
int addDigits(int num) {
    while (num >= 10) {
	int sum = 0;
	while (sum > 0) {
	    sum += num % 10;
	    num /= 10;
	}
	num = sum;
    }

    return num;
}


int main() {
   return 0;
}
