#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[1000];
    char *token;
    double result = 0;

    printf("введите выражение : ");
    fgets(input, sizeof(input), stdin);

    token = strtok(input, "-");
    while (token != NULL)
    {
        double num = atof(token);
        result += num;
        token = strtok(NULL, "-");
    }

    printf("результат: %lf\n", result);

    return 0;
}
