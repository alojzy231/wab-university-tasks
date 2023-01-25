#include <stdio.h>
#include <fcntl.h>

#define SIZE 1024

int main(int argc, char *argv[])
{
    char buf[SIZE];
    int src, dst;
    int readBytes;

    src = open(argv[1], O_RDONLY);
    if (src == -1)
    {
        printf("Blad podczas otwierania pliku zrodlowego\n");
        return 1;
    }

    dst = open(argv[2], O_WRONLY | O_CREAT, 0644);
    if (dst == -1)
    {
        printf("Blad podczas otwierania pliku docelowego\n");
        close(src);
        return 1;
    }

    while ((readBytes = read(src, buf, SIZE)) > 0)
    {
        write(dst, buf, readBytes);
    }

    close(src);
    close(dst);

    return 0;
}
