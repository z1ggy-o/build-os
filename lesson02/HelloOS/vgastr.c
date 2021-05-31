#include "vgastr.h"

void _strwrite(char *str)
{
    char *p_strdst = (char *)(0xb8000);
    while (*str) {
        *p_strdst = *str++;
        p_strdst += 2;  // move 2 byte each time, one for ASCII code, one for color code
    }
    return;
}

void printf(char *fmt, ...)
{
    _strwrite(fmt);
    return;
}
