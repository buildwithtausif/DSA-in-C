#include <stdio.h>

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("./file2.txt", "w");
    if (!fp) return 1;

    int ret_code = 0;
    char c;

    for (c = 'a'; ret_code != EOF && c <= 'z'; c++) {
        ret_code = fputc(c, fp);
    }

    if (ret_code == EOF) {
        printf("Write failed\n");
    } else {
        printf("Done!\n");
    }

    fclose(fp);
    return 0;
}
