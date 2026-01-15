#include <stdio.h>
#include <string.h>

// Function to read memory info and display CPU usage (percentage)
// Read from /proc/meminfo to get memory usage details

void meminfo_read(){
    long total, free, used;
    
    FILE *meminfo = fopen("/proc/meminfo", "r");

    if(!meminfo) return;

    fscanf(meminfo, "MemTotal: %ld kB\n", &total); // Read total memory 
    
    fscanf(meminfo, "MemFree: %ld kB\n", &free); // Read free memory
    
    used = total - free;
    
    printf("Memory Usage: %.2f%%\n", (used * 100.0) / total);
    
    fclose(meminfo);
}