#include <stdio.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
    char buffer[BUFFER_SIZE];
    int fd, bytes_read;

    fd = open(argv[1], O_RDONLY);

    if (fd == -1)
    {
        printf("Nie udało się otworzyć pliku %s\n", argv[1]);
        return 1;
    }

    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        write(STDOUT_FILENO, buffer, bytes_read);
    }

    close(fd);

    return 0;
}