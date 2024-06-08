#include "string.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string string_new(char* s) {
    string str;

    str.length = 0;

    char c = *s;
    while (c != '\0') {
        str.length++; 
        c = *(s + str.length);
    }

    str.data = malloc(str.length + 1);
    memcpy(str.data, s, str.length);
    str.data[str.length] = '\0';

    return str;
}

void string_print(string str)
{
    printf("%s", str.data);
}

void string_push(string* str, char c)
{
    str->data = realloc(str->data, ++str->length);
    str->data[str->length - 1] = c;
    str->data[str->length] = '\0';
}

void string_free(string* str)
{
    free(str->data);
}
