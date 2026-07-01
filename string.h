#ifndef STRING_H
#define STRING_H
// sort
// sort reverse
// flip

/*void print(const char *p) {
	while(*p) {
		putchar(*p);
		p++;
	}
}*/

int get_len(const char *p) {
	int len = 0;

	while(*p) {
		len++;
		p++;
	}

	return len;
}



void flip(const char *p) {
	int len = get_len(p);

}


#endif
