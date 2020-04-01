/*
    ���Ӻ�@20200401
*/

#include <stdio.h>
#include <math.h>

struct polar_coordinate
{
    double r;
    double angle;
};
typedef struct polar_coordinate polar;

struct rectangular_coordinate
{
    double x;
    double y;
};
typedef struct rectangular_coordinate rectangular;

void change(rectangular *, const polar *);

int main(void)
{
    rectangular rect;
    polar pol;

    puts("����ʸ���ĳ��ȺͽǶȣ������꣩���ո�������������˳�");
    while (scanf("%lf %lf", &pol.r, &pol.angle ) == 2)
    {
        change(&rect, &pol);
        printf("�����꣺��%lf, %lf)\tֱ�����꣺(%lf, %lf)\n", pol.r, pol.angle, rect.x, rect.y);
        puts("����ʸ���ĳ��ȺͽǶȣ������꣩�����Ÿ������������˳�");
    }
    printf("Bye\n");

    return 0;
}

void change(rectangular * rec, const polar * pol)
{
    rec->x = (pol->r) * cos(pol->angle);
    rec->y = (pol->r) * sin(pol->angle);
}