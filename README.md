# C++ Division by Zero Error
This repository demonstrates a common C++ error: division by zero.  The `bug.cpp` file contains the erroneous code, resulting in undefined behavior.  The solution, in `bugSolution.cpp`, handles potential division by zero to prevent crashes. 

## Bug Description
Attempting to divide an integer by zero is a runtime error that leads to undefined behavior. It can cause the program to crash or produce unpredictable results.  The behavior is not standardized across compilers and platforms. 

## Solution
The solution implements robust error handling by checking for a zero divisor before performing the division. This prevents the division by zero error and gracefully handles the situation.
