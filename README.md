# How to make use of this codebase

Took help from these two articles:
https://cylab.be/blog/234/creating-a-dynamic-library-in-c
https://cylab.be/blog/235/calling-c-from-python

```
# Create object file for library.o
gcc -c -fPIC library.c library.h

# Create SO with name `my`
gcc -shared -o libmy.so library.o

# Create a simple program that is using code from above shared libraray and create object file for that
gcc -c main.c

# Create an executable which shall use main.o and dynamically link it with libmy.so
gcc -o call_main main.o -L./ -lmy

# Run the executable
./call_main

```

To run it through python, run command
`python3 checkForNonAscii.py`
