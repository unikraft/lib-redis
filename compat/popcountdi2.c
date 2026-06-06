#include <stdint.h>

int __popcountdi2(uint64_t x)
{
	int count = 0;

	while (x) {
		x &= x - 1;
		count++;
	}

	return count;
}
