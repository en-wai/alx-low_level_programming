# 0x18 Dynamic Libraries

To test the programs, while creating a dynamic library; download all the files in this directory.`cd` into the task's directory and type the following commands:

`gcc -c -fPIC *.c` - this generates object files (.o)

`gcc -shared -o file_name.so *.o` - this creates the library (`file_name.so` being the dynamic library)

----------------------------------------

To verify it has the right functions, enter the following commands:

`nm -D file_name.so`
