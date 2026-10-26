#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
#define DEBUG_
 */

main(argc, argv)
char **argv;
{
    int num, i;
    int c;

    if (argc < 2) {
        printf("usage: %s <INT>\n", argv[0]);
        return 1;
    }

    num = atoi(argv[1]);
    srand((unsigned int) time(NULL));

    for (i = num; i; i--) {
        ask();
        while (c = getchar())
            if (c == '\n' || c == EOF)
                break;
    }

    return 0;
}

ask()
{
    #define pronomn 6
    #define tempsn 12

    char *pronoms[pronomn] = {
        "je",
        "tu",
        "il",
        "nous",
        "vous",
        "ils"
    };

    char *temps[tempsn] = {
        "présent",
        "imparfait",
        "futur",
        "passé simple",

        "passé composé",
        "plus-que-parfait",
        "futur antérieur",
        "passé antérieur",

        "conditionel présent",
        "conditionel passé",

        "subjonctif présent",
        "subjonctif passé",
    };

    int pronomidx = rand() % pronomn;
    int tempsidx = rand() % tempsn;

    #ifdef DEBUG_
    printf("pronomidx = %d\n", pronomidx);
    printf("tempsidx = %d\n", tempsidx);
    exit(1);
    #endif

    printf("%s  %s", pronoms[pronomidx], temps[tempsidx]);

    return 0;
}
