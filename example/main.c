#include "yzarray.h"
#include <stdio.h>

int main(void) {
    YzArray* arr = yz_array_new(sizeof(int), 5);
    int foo[5] = {32, 532, 312, 89, 54};

    for (int i = 0; i < 5; i += 1) {
		printf("About to assign: %d\n", foo[i]);
        yz_array_assign(arr, i, &foo[i]);
		printf("Just assigned %d into YzArray\n", *YZ_ARRAY_GET(int, arr, i));
    }
}
