#ifndef STRING_H
#define STRING_H
// sort
// sort reverse

int get_len(const char *p) {
	int len = 0;

	while(*p) {
		len++;
		p++;
	}

	return len - 1;
}


void swap(char* x, char* y) {
	char tmp = *x;
	*x = *y;
	*y = tmp;
}

void flip(char *p) {
	int len = get_len(p);

	for(int i = 0; i <= (len/2); i++) {
		swap(&p[i], &p[len-i]);
	}
}

#endif
