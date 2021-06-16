# Sorting algorithms & Big O 💻

In this project we implemented several sorting algorithms using the C programming language, these programs can sort arrays of integers and linked lists containing an integer.

# File descriptions 📁

| File          | Data Type     | Big O |
| ------------- |-------------  | ----- |
| [0-bubble_sort.c](https://github.com/daniapm/sorting_algorithms/blob/master/0-bubble_sort.c) | Array | [0-O](https://github.com/daniapm/sorting_algorithms/blob/master/0-O) |
| [1-insertion_sort_list.c](https://github.com/daniapm/sorting_algorithms/blob/master/1-insertion_sort_list.c) | Doubly linked-list | [1-O](https://github.com/daniapm/sorting_algorithms/blob/master/1-O) |
| [2-selection_sort.c](https://github.com/daniapm/sorting_algorithms/blob/master/2-selection_sort.c) | Array | [2-O](https://github.com/daniapm/sorting_algorithms/blob/master/2-O) |
| [3-quick_sort.c](https://github.com/daniapm/sorting_algorithms/blob/master/3-quick_sort.c) | Array | [3-O](https://github.com/daniapm/sorting_algorithms/blob/master/3-O) |

# Requirements 🧰
- Use the gcc 4.8.4 version.
- Compile using these flags -Wall -Werror -Wextra and -pedantic.

# Usage 🔧
```
root@DESKTOP-6N4L4UF:~/sorting_algorithms# gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
root@DESKTOP-6N4L4UF:~/sorting_algorithms# ./bubble 
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 73, 96, 86, 7, 99
19, 48, 13, 52, 71, 73, 86, 96, 7, 99
19, 48, 13, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
root@DESKTOP-6N4L4UF:~/sorting_algorithms# 
```
## Authors 👩‍💻👨‍💻

- [@Dania Jibellis Puertas Mangones](https://github.com/daniapm)
- [@Juan Camilo Cadavid Velásquez](https://github.com/Juansu01)
