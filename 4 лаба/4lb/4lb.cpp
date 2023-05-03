#include <iostream>
#include <math.h>

using namespace std;

extern "C" float func(float x);

int main()
{
    for (float i = 0.0f; i < 1.0f; i += 0.1f)
    {
        cout << func(i);
        cout << endl;
    }
    system("pause");
    return EXIT_SUCCESS;
}

extern "C" float trigonometriya(float arg) {
    return (    (tan(arg) + sin(arg)) / powf(2.7, arg)  );
}