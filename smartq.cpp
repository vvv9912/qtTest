#include "smartq.h"

smartq::smartq()
{

}

int smartq::max(int a, int b)
{
    if (a>b)
        return a;
    return b;
}

int smartq::min(int a, int b)
{
    if (a<b)
        return a;
    return a;
}
