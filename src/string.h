#ifndef STRING_H
#define STRING_H

typedef struct {
    char* data;
    int length;
} string;

string string_new(char* s);
void string_print(string s);
void string_push(string* str, char c);
void string_free(string* str);

#endif
