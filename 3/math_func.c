#include "stdio.h"
#include "math.h"
#define swap(a, b, buff) {buff = *(b); *(b) = *(a); *(a) = buff;}

typedef struct
{
    double x, y;
} Point;

double distance(const Point *a, const Point *b)
{
    return sqrt((b->x - a->x)*(b->x - a->x)+(b->y - a->y)*(b->y - a->y));
}

int gcd(int a, int b)
{
    int buff;
    while (b) {
		a %= b;
		swap(&a, &b, buff);
	}
	return a;
}

int reverse_digit(int a)
{
    int b = 0;
    int flag = a<0;
    a = flag? -a: a;
    while(a){
        b = b*10 + (a%10);
        a/=10;
    }
    return flag? -b: b;
}

int primeQ(int a)
{
    if (a<2) return 0;
    for (int i = 2; i*i<=a; ++i)
        if (a%i==0) return 0;
    return 1;
}

double min3(double a, double b, double c)
{
    double buff;
    if (b<a) swap(&a, &b, buff);
    if (c<a) swap(&a, &c, buff);
    return a;
}

int main()
{
    Point a = {0,0}, b = {3,4};
    Point c = {0.342,-0.23432}, d = {-0.162, 0.76578};
    printf("Distance |ab|: %f\n", distance(&a, &b));
    printf("Distance |cd|: %f\n", distance(&c, &d));
    printf("GCD 15 and 10: %d\n", gcd(10, 5));
    printf("GCD 23 and 10: %d\n", gcd(10, 23));
    printf("Reverse digit order 12345: %d\n", reverse_digit(12345));
    printf("Reverse digit order -12345: %d\n", reverse_digit(-12345));
    printf(primeQ(10)?"10 is prime number\n":"10 isn't prime number\n");
    printf(primeQ(11)?"11 is prime number\n":"11 isn't prime number\n");
    printf("Minimum of 1, 2, 3: %f\n", min3(1, 2, 3));
    printf("Minimum of -1, 2, -3: %f\n", min3(-1, 2, -3));
    return 0;
}