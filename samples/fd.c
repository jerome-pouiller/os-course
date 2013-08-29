/*
 * Licence: GPL
 * Created: 2013-08-29 11:58:17+02:00
 * Main authors:
 *     - Jérôme Pouiller <jezz@sysmic.org>
 */
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv) {
    int fd, c;
    char buf[256];

    if (argv[1])
        fd = open(argv[1], O_RDONLY);
    else 
        fd = 0;
    while ((c = read(fd, buf, sizeof(buf))) > 0)
        printf("Read %d bytes from %d\n", c, fd);

    return 0;
}

