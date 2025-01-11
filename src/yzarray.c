#include "yzarray.h"
#include <stdlib.h>
#include <string.h>

YzArray* yz_array_new(size_t element_size, u32 length) {
    YzArray* yz_array = malloc(sizeof(YzArray));
    yz_array->data = calloc(length, element_size);
    yz_array->element_size = element_size;
    yz_array->length = length;

    return yz_array;
}
const void* yz_array_get(const YzArray* array, u32 index) {
    if (index >= array->length)
        return NULL;
    return (void*)((char*)array->data + index * array->element_size);
}
void yz_array_assign(YzArray* array, u32 index, const void* value) {
    if (index >= array->length)
        return;
    memcpy(
        ((char*)array->data + index * array->element_size),
        value,
        array->element_size);
}
