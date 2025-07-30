# Title
Design and Develop a c program using functions to implement string operations such as compare, concatenate, string, length. Do not use string handling functions.  
# Problem Description
The program should prompt the user to input two strings and perform the specified operations accordingly.  
# Method
Use parameter passing techniques and string handling functions.

<br>

# **Viva Corner**

### *Parameter passing Technique ?*
- It defines how values are sent to functions when they are called in C.
- 2 types: 
1. Call by Value:
    - A copy of the actual value is passed to the function.
    - Changes made inside the function do not affect the original variable.
2. Call by Reference (using pointers):
    - The address of the variable is passed using pointers.
    - Changes made inside the function will reflect in the original variable.  

### *User- Defined Functions ?*
- It is an independent block of code created by the programmer to perform a specific task.  
- Helps in modular programming, improve code reusability, and make the program easier to understand and maintain.

### *String Handling Functions ?*
- It is a set of pre-defined functions provided by the 'string.h' library that allows us to perform operations, handle and manipulate strings.

Some bulit-in functions:

| Function    | Purpose                                     |
| ----------- | ------------------------------------------- |
| `strlen()`  | Get length of string                        |
| `strcat()`  | Concatenate strings                         |
| `strncat()` | Concatenate limited characters              |
| `strcmp()`  | Compare two strings                         |
| `strcpy()`  | Copy one string to another                  |
| `strncpy()` | Copy limited characters from one to another |
| `strrev()`  | Reverse a string (non-standard)             |
| `strchr()`  | Find first occurrence of character          |
| `strstr()`  | Find first occurrence of substring          |

### *Concatenation ?*
- It means joining two strings together to form one single string.
- strcat() function which is available in the string.h library is used to perform string concatenation 

### *Comparsion ?*
- It means checking whether two strings are equal or which one is greater.
- strcmp() function from tring.h library is used.


