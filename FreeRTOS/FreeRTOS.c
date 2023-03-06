#include <stdio.h>

#if 0
/***********************堆***********************/
char heap_buf[1024];

int pos = 0;

void* my_malloc(int size)
{
	int old_pos = pos;
	pos += size;

	return &heap_buf[old_pos];
}

void my_free(void* buf)
{
	//free
}

int main(void)
{
	char ch = 'A'; //ch = 65
	char* buf = my_malloc(100);
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		buf[i] = ch + i;
		printf("%c\n", buf[i]);
	}

	my_free(buf);
	return 0;
}

#elif 1
#endif