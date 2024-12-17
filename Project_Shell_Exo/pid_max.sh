#!/bin/bash

pid_max=$(cat /proc/sys/kernel/pid_max) 
echo "Le PID maximal est : $pid_max"
