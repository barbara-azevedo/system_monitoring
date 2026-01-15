#!/bin/bash

SLEEP_TIME=${1:-5} # Default to 5 seconds if not provided by user

echo "Initializing System Monitor (sysmon)..."
echo "Refresh interval: ${SLEEP_TIME}s"

while true; do
    ./bin/sysmon >> logs/sysmon.log
    ./bin/sysmon
    sleep $SLEEP_TIME
done