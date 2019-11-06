rm -f get_next_line

gcc -Wall -Wextra -Werror -g3 -fsanitize=address -D BUFFER_SIZE=2 -I. get_next_line.c get_next_line_utils.c test.c -o get_next_line
./get_next_line < tests/simple

rm -f get_next_line
