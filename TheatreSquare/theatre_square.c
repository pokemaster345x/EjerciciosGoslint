int main()
{
    unsigned long long int a, n, m, r;
    scanf("%llu %llu %llu", &n, &m, &a);
    r = ceil((long double) n/a) * ceil((long double) m/a);
    printf("%llu\n", r);
    return 0;
}
/*
#include <stdio.h>

int main()
{
    unsigned long long int a, n, m, l1, l2;
    scanf("%llu %llu %llu", &n, &m, &a);
    l1 = n / a;
    l2 = m / a;
    if((long double) n/a > l1) l1++;
    if((long double) m/a > l2) l2++;
    printf("%llu\n", l1*l2);
    return 0;
}*/

/*
#include <stdio.h>

int main()
{
    unsigned long long int a, n, m, l1, l2;
    scanf("%llu %llu %llu", &n, &m, &a);
    l1 = n / a;
    l2 = m / a;
    if(n % a != 0) l1++;
    if(m % a != 0) l2++;
    printf("%llu\n", l1*l2);
    return 0;
}*/