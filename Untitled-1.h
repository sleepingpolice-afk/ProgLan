#include <stdio.h>
#include <math.h>

float compound_interest(float p, float r, float t)
{
    return p * powf((1 + r / 100),t);
}

