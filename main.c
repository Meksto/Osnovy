#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 4096

int scmp(const void* p1, const void* p2)
{
    const char* s1, * s2;

    s1 = *(char**)p1;
    s2 = *(char**)p2;
    return strcmp(s1, s2);
}

int main(void)
{
    FILE* ifp, * ofp;
    char* lineptr[MAXLINE];
    char s[MAXLINE];
    int i, nl;

    ifp = fopen("D:\\in.txt", "r");
    if (ifp == NULL || (ofp = fopen("D:\\out.txt", "w")) == NULL) {
        //perror("fopen");
        //return -1;
    }

    for (i = 0; i < MAXLINE; ) {
        if (fgets(s, sizeof(s), ifp) == NULL)
            break;
        if (*s != '\n')
            lineptr[i++] = strdup(s);
    }

    nl = i;
    qsort(lineptr, nl, sizeof(char*), scmp);

    for (i = 0; i < nl; i++) {
        fprintf(ofp, "%s", lineptr[i]);
        free(lineptr[i]);
    }
    fclose(ifp);
    fclose(ofp);
    return 0;
}
