#include <stdio.h>
#include <string.h>

// Function to read cpu info and display CPU usage (percentage)
// Reads from /proc/stat to get CPU usage details

void cpu_read(){
    char cpu[5];
    unsigned long user, nice, system, idle, total, busy;
    
    FILE *stat = fopen("/proc/stat", "r");

    if(!stat) return;

    fscanf(stat, "%s %lu %lu %lu %lu", cpu, &user, &nice, &system, &idle);

    total = user + nice + system + idle;
    busy = total - idle;

    printf("CPU Usage: %.2f%%\n", (busy * 100.0) / total);

    fclose(stat);
}