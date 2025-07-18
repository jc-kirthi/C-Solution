# **CONCEPT CENTRE**
---

### *Recursion*
- It is a technique in which a function calls itself to solve a smaller part of the problem.
- It must have a base condition to stop the recursive calls.
---
### *Dynamic Memory Allocation*
- It is the process of allocating memory during runtime using functions from the <stdlib.h> library.
- It is useful when we don’t know the size of data in advance.
-  4 common functions:
1. malloc () – Memory Allocation
     - It allocates a block of memory in the heap during runtime, but it does not initialize the memory (it may contain garbage values). 
2. calloc () – Contiguous Allocation
    - It allocates memory like malloc () but initializes all values to 0. 
3. realloc () – Reallocate/Resize Memory
    - It is used to resize a previously allocated memory block using malloc () or calloc ().
4.  free () – Free Allocated Memory
    - It is used to release the memory that was previously allocated using malloc (), calloc (), or realloc ().
    - This helps avoid memory leaks.   

---

### *Pointer Arithmetic*
- It means performing mathematical operations on pointers to move through memory locations, especially arrays.
- Since pointers store memory addresses, we can add or subtract integers to move between elements.
- Multiplying or dividing pointers is not allowed in C.

---

### *Preprocessor Directive*
- It is a command that begins with # and is processed before compilation by the preprocessor in C.
- It is used to include libraries, define constants, and manage conditional compilation.
- It does not end with semicolons and are not part of actual code execution.
- Example: #define PI 3.14   is a macro/symbolic constant
---
