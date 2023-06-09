#include <iostream>
#include <math.h>

using namespace std;
extern "C" float func_interval(float x);

int main(int argc, char** argv)
{
    for (float i = 0.0f; i < 1.1f; i += 0.1f)
        cout << func_interval(i) <<endl;

    system("pause");
    return 1;
}

extern "C" float fun_el(float x) {
    float f;
    f = ((tan(x) + sin(x)) / powf(2.71, x));
    return f;
}