#!/usr/bin/env bash
#
# gen_map.sh — generates a random map file in the format BSQ expects.
#
# Usage:
#   ./gen_map.sh <width> <height> <density> [seed]
#
#   width    number of columns  (positive integer)
#   height   number of rows     (positive integer)
#   density  chance a cell is an obstacle, as a percentage: 0-100
#            (independent of width/height, unlike the Perl generator
#            in the subject appendix, where the same density value
#            produces a different actual obstacle ratio depending on
#            the map's height)
#   seed     optional. Reuse it to regenerate the exact same map.
#
# Examples:
#   ./gen_map.sh 20 15 25 > map.txt
#   ./gen_map.sh 20 15 25 | ./bsq
#   ./gen_map.sh 20 15 25 42 > map.txt   # reproducible with seed 42

set -euo pipefail

usage() {
	echo "Usage: $0 <width> <height> <density 0-100> [seed]" >&2
	exit 1
}

[ "$#" -eq 3 ] || [ "$#" -eq 4 ] || usage

width="$1"
height="$2"
density="$3"

is_uint() { [[ "$1" =~ ^[0-9]+$ ]]; }

is_uint "$width" && [ "$width" -gt 0 ] \
	|| { echo "error: width must be a positive integer" >&2; exit 1; }
is_uint "$height" && [ "$height" -gt 0 ] \
	|| { echo "error: height must be a positive integer" >&2; exit 1; }
is_uint "$density" && [ "$density" -le 100 ] \
	|| { echo "error: density must be an integer from 0 to 100" >&2; exit 1; }

if [ "$#" -eq 4 ]; then
	is_uint "$4" || { echo "error: seed must be a positive integer" >&2; exit 1; }
	RANDOM="$4"
fi

EMPTY="."
OBSTACLE="o"
FULL="x"

printf '%d%s%s%s\n' "$height" "$EMPTY" "$OBSTACLE" "$FULL"

for ((row = 0; row < height; row++)); do
	line=""
	for ((col = 0; col < width; col++)); do
		if ((RANDOM % 100 < density)); then
			line+="$OBSTACLE"
		else
			line+="$EMPTY"
		fi
	done
	printf '%s\n' "$line"
done
