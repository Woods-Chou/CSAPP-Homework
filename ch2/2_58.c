#include <stdio.h>

typedef unsigned char* byte_pointer;

int is_little_endian() {
	long a = 1;
	if ((byte_pointer)&a)
		return 1;
	return 0;
}

int main() {
	printf("%d\n", is_little_endian());
}
