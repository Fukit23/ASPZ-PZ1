#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char keyword[50];
    int frequency;
} Data;

int compareKeyword(const void *a, const void *b) {
    Data *dataA = (Data *)a;
    Data *dataB = (Data *)b;
    return strcmp(dataA->keyword, dataB->keyword);
}

int compareMulti(const void *a, const void *b) {
    Data *dataA = (Data *)a;
    Data *dataB = (Data *)b;
    
    int res = strcmp(dataA->keyword, dataB->keyword);
    if (res == 0) {
        return dataA->frequency - dataB->frequency;
    }
    return res;
}

int main() {
    Data items[] = {
        {"apple", 10},
        {"banana", 5},
        {"apple", 2},
        {"cherry", 7}
    };
    int n = sizeof(items) / sizeof(items[0]);

    int (*sortStrategy)(const void *, const void *) = compareMulti;

    qsort(items, n, sizeof(Data), sortStrategy);

    for (int i = 0; i < n; i++) {
        printf("%s: %d\n", items[i].keyword, items[i].frequency);
    }

    Data key = {"apple", 2};
    Data *found = (Data *)bsearch(&key, items, n, sizeof(Data), compareMulti);

    if (found) {
        printf("\nЗнайдено: %s з частотою %d\n", found->keyword, found->frequency);
    } else {
        printf("\nЕлемент не знайдено.\n");
    }

    return 0;
}
