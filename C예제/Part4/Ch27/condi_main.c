#define CONDITION 2

#if CONDITION==1
    #include "hello1.h"
#elif CONDITION==2
    #include "hello2.h"
#else
    #include "hello3.h"
#endif

int main()
{
    hello();
    return 0;
}