# Calculator

This project implements a calculator machine capable of performing addition, multiplication, and subtraction operations. The machine operates on a string where a cursor indicates the current position at the beginning of the string (before the first character).

## About

> Final Project of Data Structures and Algorithms

> Under The Supervision of [Prof.Hamid Hoorfar](https://scholar.google.com/citations?user=BeV-i0AAAAAJ&hl=en)

> Fall 2020

## Overview

The objective of the project is to implement a calculator machine with the following operations:

* '<': Move the cursor one character to the left.
* '>' : Move the cursor one character to the right.
* 'c +': Add character c to the current string (behind the cursor) and move the cursor to the right.
* '-': Delete the character before the cursor.
* '?': Print the current string along with the cursor position (cursor denoted by '|').
* '!': Print the result of evaluating the written string.
* 
## Constraints
* Time Limit: 1 second
* Memory Limit: 256 MB

## Features

1. **String Manipulation**: The calculator allows moving the cursor, adding, and deleting characters from the input string.

2. **Expression Evaluation**: Expressions written on the calculator are evaluated and results displayed accurately.

3. **Postfix Notation**: Expressions are internally converted to postfix notation for efficient evaluation.

4. **Result Caching**: Previously computed results are cached to improve performance when re-evaluating the same expression.

5. **Efficient Data Structures**: String handling and expression evaluation are optimized using linked lists and stacks.


## Input

Example:

![Input](https://github.com/Amirbehnam1009/Linear-Algebra-Projects/assets/117163007/4dd93de6-0199-443d-985a-7c69a5d5de01)


## Output

Example:

![Output](https://github.com/Amirbehnam1009/Linear-Algebra-Projects/assets/117163007/02b3c4bc-9d81-4a43-9dc4-78ebf9f565d0)
