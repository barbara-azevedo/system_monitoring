## Goal 
Create tool that:
- Monitors CPU, memory and disk
- Generates periodic reports

Using C for system monitoring and Bash for automation and data presentation. 

## Implementation

The CPU information is from /proc/stat
The memory information is from /proc/meminfo
The disk information is from df -h 

## Scripts

There are two scripts available:

# System monitor with refresh interval

Run with

```bash
./scripts/init.sh <interval>
```

Replace <interval> with the number of seconds between each refresh. If this value is not provided, the default is 5 seconds interval.
The output of this script is saved on /logs/sysmon.log file. 

# Report with last measurements from sysmon.log file
After running the init.sh script, this functionality is available. Run with

```bash
./scripts/report.sh <number of reports>
```
Replace <number of reports> with the number of the last reports of sysmon. If this value is not provided, the default is 1 full report.

*Only available if sysmon.log file already exists.*

## Project Structure
system_monitor/
├── bin/
│   └── 
├── src/
│   ├── cpu.c
│   ├── disk.c
│   ├── meminfo.c
│   ├── sysmon.c
│   └── sysmon.h
├── scripts/
│   └── init.sh
├── logs/
│   └── 
├── Makefile
└── README.md

# Environment 
Debian 13

# Dependencies 
sudo apt install -y build-essential make