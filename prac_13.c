#include <stdio.h>
#include <string.h>
#define SQR(x) x*x

union Demon {
	int cock;
	char psy[];
	double depth;
	int time;
} name;

int main() {
	union Demon;
	name.cock = 12;
	name.depth = 25.7;
	strcpy_s(name.psy, "Exusiai");
	name.time = 17;

	printf("I have a %d sized cock which can sink into %s's %.1f measured psy for %d hrs!", name.cock, name.psy, name.depth, name.time);

	return 0;
}


//代码运行结果：
//          Have a nice day