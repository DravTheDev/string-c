#include <stdbool.h>

#ifndef STRING_H
#define STRING_H

#define A_UPPER 65
#define Z_UPPER 90
#define A_LOWER 97
#define Z_LOWER 122

#define CONV 32

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

void s(char *p, bool rv) {
	int len = get_len(p);

	for(int i = 0; i <= len - 1; i++) {
		_Bool swapped = 0;
		for(int j = 0; j <= len - i - 1; j++) {
			if(!rv) {
				if(p[j] > p[j+1]) {
					swap(&p[j], &p[j+1]);
					swapped = 1;
				}
			} else {
				if(p[j] < p[j+1]) {
					swap(&p[j], &p[j+1]);
					swapped = 1;
				}
			}
		}

		if(swapped == 0) { break; }
	}
}

void sort(char *p) {
	s(p, false);
}

void sort_rv(char *p) {
	s(p, true);
}

void upper(char *p) {
	int len = get_len(p);

	for(int i = 0; i<= len; i++) {
		if(p[i] >= A_LOWER && p[i] <= Z_LOWER) {
			p[i] = p[i] - CONV;
		}

	}
}

void lower(char *p) {
	int len = get_len(p);

	for(int i = 0; i <= len; i++) {
		if(p[i] >= A_UPPER && p[i] <= Z_UPPER) {
			p[i] = p[i] + CONV;
		}
	}
}

#endif
