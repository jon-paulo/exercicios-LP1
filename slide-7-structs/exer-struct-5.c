#include <stdio.h>

struct Ponto {
        int x;
        int y;
        int z;
};

void main (void) {
	struct Ponto v1 = {1, 0, 5};
	struct Ponto v2 = {3, 3, 3};
	struct Ponto v3 = {0, 10, 0};
	printf("y: %d, %d, %d \n", v1.y, v2.y, v3.y);
	
	v1.z = v1.z + 10;
	v2.z = v2.z + 10;
	v3.z = v3.z + 10;

	printf("v2: (%d,%d,%d) \n", v2.x, v2.y, v2.z);
	
//	printf("v1: (%d,%d,%d) v2: (%d,%d,%d) v3: (%d,%d,%d)\n",
//           v1.x, v1.y, v1.z,
//           v2.x, v2.y, v2.z,
//           v3.x, v3.y, v3.z);
}
