#!/bin/bash
cat /etc/passwd | sed '/^#/d' | awk 'BEGIN{FS=":"} {print $1}' | sed '/^#/d' | awk 'NR % 2 == 0' | rev | sort -r | sed -n "$FT_LINE1","$FT_LINE2"p | tr '\n' ', ' | sed 's/, $/./'
