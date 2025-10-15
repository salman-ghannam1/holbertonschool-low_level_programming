#include "main.h"

void print_alphabet(void)
{
    char c;
    for (c = 'a';c <= 'z';c++)
        _putchar(c + '\n');

}

int main(void)
{
    print_alphabet();
}
