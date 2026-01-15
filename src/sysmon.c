#include <stdio.h>
#include "sysmon.h"

// Main function to call individual system monitoring functions

int main() {
    printf("==== System Monitor ====\n");
    cpu_read();
    meminfo_read();
    disk_read();
    printf("========================\n");
    return 0;
}
