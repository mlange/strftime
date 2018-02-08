#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(int argc, char *argv[])
{
    int status;

    char buffer[10];

    struct tm *time_ptr;

    time_t now;

    now = time(NULL);

    time_ptr = localtime(&now);

    strftime(buffer, sizeof(buffer), "%C", time_ptr);

    printf("%%C: %s\n", buffer);

    exit(0);
}
