#include "main.h"

void print_alphabet(void)
{
    char c;
    for (c = 'a'; c <= 'z'; c++)
        _putchar(c);

    _putchar('\n'); // اطبع سطر جديد بعد الحروف
}

int main(void)
{
    print_alphabet();
    return (0);
}
