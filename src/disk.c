#include <stdio.h>
#include <string.h>

// Function to read disk usage info and display Disk usage (percentage)
// Uses 'df' command to get disk usage details

// df: shows disk usage
// -h: shows in "human readable" format (GB, MB, etc.)
// tail -1: gets the last line of the output (the root filesystem)
// awk '{print $5}': extracts the 5th column (usage percentage)

void disk_read(){
    char usage[10];
    
    FILE *disk = popen("df -h / | tail -1 | awk '{print $5}'", "r");

    if(!disk) return;

    fgets(usage, sizeof(usage), disk);

    printf("Disk Usage: %s", usage);

    pclose(disk);
}