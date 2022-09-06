#include <stdio.h>

struct point
{
    int x;
    int y;
};

void show(struct point p);
struct point PointAdd(struct point p1,struct point p2);

int main()
{
    struct point s1={1,2};
    struct point s2={3,4};
    struct point result;
    result=PointAdd(s1,s2);

    show(result);
    return 0;
}

void show(struct point p)
{
    printf("x 좌표: %d,y 좌표 : %d\n",p.x,p.y);
}

struct point PointAdd(struct point s1,struct point s2)
{
    struct point added={s1.x+s2.x,s1.y+s2.y};
    return added;
}
