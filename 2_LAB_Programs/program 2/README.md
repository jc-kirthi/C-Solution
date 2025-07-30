# Title
Design and Develop a C program to compute the roots of a quadratic equation by accepting the coefficients. Print appropriate messages.
# Problem Description
The program should prompt the user to input the coefficients 'a', 'b' and 'c' of the quadratic equation. Then, apply the formula to calculate the roots.
# Method
### else-if ladder.

<br>

# **Viva Corner**

### *Quaratic equation ?*
- It is a second-degree polynomial equation of the form : ax^2 + bx + c = 0

- if d (discriminant) > 0 :
    - root1=(−b+d)/2a 
    - root2=(−b−d)/2a

- d == 0 :
    - root1=root2= −b/2a

- d < 0 :
    - root1 = a+bi , root2 = a−bi
        - a(real)= −b/2a
        - b(img)= sqrt(d/2a) 

### *math.h ?*
- It is a header file that provides declarations for mathematical functions.

### *fabs() ?*
- It is a function from the <math.h> header file.<br>
- Used to return the absolute value (magnitude without its sign) of a floating-point number(real numbers with integer and fractional parts).

### *Format Specifiers ?*
- They are special symbols used in C to tell the compiler the type of data we are reading or printing.
- They are used with functions like printf() and scanf() to format input and output properly.
- Each format specifier starts with a % symbol, followed by a character that represents the data type.
- Examples: 
   - %d	- Integer
   - %f  -  Float
   - %s	- String
