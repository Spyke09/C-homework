#include "stdio.h"

void podschet(char *a)
{
    int c_prob = 0, c_n = 0, c_t = 0;
    do{
        if (*a==' ') c_prob++;
        if (*a=='\n') c_n++;
        if (*a=='\t') c_t++;
    } while(*(++a)!='\0');
    printf("Number of spase: %d\n", c_prob);
    printf("Number of new line: %d\n", c_n);
    printf("Number of tabs: %d\n", c_t);
}

void po_odnomu(char *a)
{
    do{
        if (*a==' ' || *a=='\n' || *a=='\t') putchar('\n');
        else putchar(*a);
    } while(*(++a)!='\0');
}

void histogram(char *a)
{
    const int N = 14;
    int h[N];
    for (int i = 0; i<N; ++i) h[i] = 0;
    int c = 0;
    do{
        if (*a==' ' || *a=='\n' || *a=='\t') {
            if (c<N) h[c] += 1;
            c = 0;
        }
        else c++;
    } while(*(++a)!='\0');
    for (int i = 0; i<N; ++i){
        printf("%d: ", i);
        for (int j = 0; j< h[i]; ++j) printf("#");
        printf("\n");
    }
}

void print_more_80(char* a, int N)
{
    int c = 0, c1;
    char* p = a;
    do{
        if (*a=='\n') {
            c1 = c;
            if (c>0) while(c--) {
                if (c1>N) putchar(*p);
                p++;
            }
            p++;
            c = 0;
            printf("\n");
        }
        else c++;
    } while(*(++a)!='\0');
    c1 = c;
    if (c>0) while(c--) {
                if (c1>N) putchar(*p);
                p++;
    }
}

void reverse(char *a)
{
    char* p = a;
    while(*(++p)!='\0');
    p--;
    for(;p!=a;p--) putchar(*p);
    putchar(*p);
}

int main()
{
    char* test1 = " we\nwef ef\twerfg erg\ndbdtb\td";
    char* test2 = "Extremely scale hold many gate prosperous provided solicitude oh hills thought partiality opinion enjoyed smile rest. We strictly extended hung one because talking. Think discretion mrs. Could our danger enough surprise view moonlight minuter. Then interested existence decisively true voice trifling securing shutters perhaps front between. \nAmounted be piqued produced conduct savings lovers mistress middletons add ferrars breakfast domestic. Husbands thoroughly attention perpetual luckily understood blush noise hope except pleasure three arise sing. Eat tastes drawings affronting justice. Belonging dashwoods course round happiness themselves belonging brought park cordially enabled civil been ashamed wanted. Discretion poor known received moments afford wishing age. \nRepulsive your distrusts impossible estate warmly gravity power what esteems tall preserved welcome leaf last appearance basket. Chief gone allow made past mistaken delightful village chapter formerly hearted happen finished. Never allow described proceed contained offer waited felicity drawings four pleasure inhabiting. Neglected assistance extensive comparison discovered dull situation besides woody sell roof affixed hills. Connection talking merely elsewhere jointure hand distant do then money summer consulted who necessary either desirous called. ";
    char* test3 = "we\nwef ef\nwerfg erg\ndbdtb\nd";
    //podschet(test1);
    //po_odnomu(test1);
    //histogram(test2);
    //print_more_80(test3, 5);
    reverse(test3);
    return 0;
}