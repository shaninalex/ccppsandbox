#include <iostream>

union one4all
{
    int int_val;
    long long_val;
    double double_val;
};

struct widget
{
    char brand[20];
    int type;
    union id
    {
        long id_nam;
        char id_char[20];
    } id_val;
};

enum specturm
{
    red,
    orange,
    yellow,
};
