#include <unistd.h>
#include "main.h"

int main(void){
	char word[0] = "_putchar\n";
	int i;

	for (i =0; i<9; i++){
		_putchar(word[i]);
	}
	return 0;
}
