#!/bin/bash

REPORT_QUANTITY=$(( (${1:-1}) * 6 )) # Default to 1 full report

echo "Last measurements from System Monitor (sysmon):"
tail -n $REPORT_QUANTITY logs/sysmon.log
