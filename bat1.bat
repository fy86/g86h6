#!/bin/sh

grep ^2 h000.txt >h001.txt
cat h001.txt | cut -d' ' -f1 > f000.txt
sort -u -k 1,1 f000.txt > f000s.txt

fping -6 -f f000s.txt > f001.txt
grep alive f001.txt >a000.txt
grep unreachable f001.txt >un000.txt
sort -u -k 1,1 a000.txt > a001.txt
sort -u -k 1,1 un000.txt > un001.txt

