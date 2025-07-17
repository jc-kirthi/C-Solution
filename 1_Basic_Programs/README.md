# **CONCEPT CENTRE**
---
### *Comments*
- They are the lines used to explain the logic of the code which are ignored by the compiler.
- 2 types:
     - Single-line comment: starts with // , used to write explanations in one line.
     - Multi-line comment: starts with /* and ends with */ , used to write longer explanations.
---
### *Compiler*
- It is a program that translates the entire C source code into machine code (binary) before running it.
- It also checks for syntax errors and produces an executable file.
- Example: The GCC compiler is widely used for compiling C programs.
---
### *stdio.h*
- It stands for Standard Input Output header file.
- It contains functions like printf(), scanf(), getchar(), putchar() etc.
- Must be included to use input/output functions in C.
---

### *Data Type*
- It defines the type of data a variable can hold.
- It also tells the compiler how much memory to reserve and how to interpret the data.
- Examples: int,float,double
---
### *Constants*
- It is a value that does not change during the execution of the program.
- Once defined, its value cannot be modified.
- It makes the program more reliable and readable.
---
### *Identifier*
- It is the name given to elements like variables and functions. 
- It must follow valid naming rules and cannot be a keyword.
- It is created by the programmer and helps the compiler know what you're referring to.
---
### *Keyword*
- It is a reserved word in C that has a special meaning to the compiler.
- keywords cannot be uaed as variable names or identifiers because they are part of the language syntax.-
---
### *Void*
- It 
is a keyword in C that means no data type or no value.
---

### *Espace Squeneces*
- They are special character combinations that start with a backslash \, used to represent non-printable or special characters in a string.
- They are used in printf() or puts() for formatting output.
- Example: 
    - \n is used to entry a new line
    - \t is used for tab space (8 spaces/position)

---
### *Value Assignment Methods*
- 2 types:
1. Static type:
     - The value is assigned directly in the code during compile time.
    - The value is fixed unless the code is changed manually.
2. Dynamic type:
    - The value is taken from the user during program execution at runtime.
    - The value can change every time the program runs by the user.    
---
### *sizeof () operator*
- It is a compile-time operator used to find the size (in bytes) of any data type or variable.

| Data Type | Size (in bytes) |
| --------- | --------------- |
| int       | 4               |
| float     | 4               |
| double    | 8               |
| char      | 1               |
| void      | 0 (no size)     |

---
### *Ternary Opertor*
- It is a short form of if-else used to make decisions in a single line.
- It is called "ternary" because it uses three operands.
- Syntax: (condition) ? expression_if_true : expression_if_false;

---

### *Indentation*
- It refers to how code is visually aligned.
- It does not affect program output atleast in C(unlike python where it matters a lot), but it improves clarity and structure.
- It is a good pratice to maintain this as a programmer. 
---
### *return 0*
- It indicates that the program has executed successfully without any errors.
- It returns the value 0 to the operating system, which is a convention meaning “successful termination”.
---

### *Garbage Value*
- It is a random, meaningless data in the memory assigned to a variable when it is declared but not initalized.
This random, meaningless data is called a garbage value.
- Always initialize your variables before using them to avoid garbage values.
---

### *About Array*
- Memory size: row size * column size* data type size
- Numberof elements: row size * column size
- Address = starting address +(index value * data type size)

<br>
// For more info head into LAB Programes ---> viva corner :) 



