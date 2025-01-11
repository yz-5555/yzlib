#ifndef YZARRAY_H
#define YZARRAY_H

#include "yztypedef.h"

typedef struct {
	void* data;
	size_t element_size;
	u32 length;
} YzArray;

YzArray* yz_array_new(size_t element_size, u32 length);
#define YZ_ARRAY_NEW(T, L) new_yz_array(sizeof(T), L)

const void* yz_array_get(const YzArray* array, u32 index);
#define YZ_ARRAY_GET(T, ARR, IDX) (const T*)yz_array_get(ARR, IDX)

void yz_array_assign(YzArray* array, u32 index, const void* value);
#define YZ_ARRAY_ASSIGN(T, ARR, IDX, ...) yz_array_assign(ARR, IDX, &(T)__VA_ARGS__)

#endif
