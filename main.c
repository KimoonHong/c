#include <stdio.h>

typedef char* byte_pointer;

void show_byte(byte_pointer start, int len){

	int i;
	for(i = 0; i < len; i++)
		printf("0x%x\n", start[i]);
}

int main(){

	int a = 0x78123456;
	show_byte((byte_pointer)&a, 1);
	printf("\n");
	show_byte((byte_pointer)&a, 2);

	printf("\n");
	show_byte((byte_pointer)&a, 3);

	printf("\n");
	show_byte((byte_pointer)&a, 4);
}

