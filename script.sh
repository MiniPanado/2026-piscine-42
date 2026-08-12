find . -type f -name "*.c" -exec basename {} .c \; | sed -z 's/\n/ /g' | sed 's/ $/\n/g'
