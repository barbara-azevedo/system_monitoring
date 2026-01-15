#include <stdio.h>
#include <time.h>

// Function to print the current timestamp in "YYYY-MM-DD HH:MM:SS" format

void print_timestamp() {
    time_t now;
    struct tm *tm_info;
    char buffer[20];

    time(&now);
    tm_info = localtime(&now);

    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", tm_info);
    printf("%s\n", buffer);
}
