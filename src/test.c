#include "string.h"

int main(void)
{
    string s = string_new("hello, world");
    string_push(&s, '\n');
    string_print(s);

    string_push(&s, 'y');
    string_push(&s, 'a');
    string_push(&s, 'y');
    string_print(s);

    string_free(&s);
    return 0;
}
