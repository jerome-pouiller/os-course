/*
 * Licence: GPL
 * Created: 2013-08-29 11:55:44+02:00
 * Main authors:
 *     - Jérôme Pouiller <jezz@sysmic.org>
 */
#include <stdio.h>

int main(int argc, char **argv) {
    int i;

    printf("Program %s: %d arguments\n", argv[0], argc);
    for (i = 0; i < argc; i++)
       printf("%d: %s\n", i, argv[i]);
    return 0;
}

