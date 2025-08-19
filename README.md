# 🧮 Calculator Project

> A sophisticated calculator implementation with string manipulation and expression evaluation capabilities

[![Data Structures](https://img.shields.io/badge/Data%20Structures-Linked%20List%20%26%20Stack-blue.svg)](https://github.com/Amirbehnam1009/Calculator)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT)
[![Status](https://img.shields.io/badge/Status-Completed-brightgreen.svg)](https://github.com/Amirbehnam1009/Calculator)

## 📖 About

🎓 **Final Project for Data Structures and Algorithms Course**  
👨‍🏫 **Under The Supervision of [Prof. Hamid Hoorfar](https://scholar.google.com/citations?user=BeV-i0AAAAAJ&hl=en)**  
🍂 **Fall 2020 Semester**

## 🚀 Overview

This project implements an advanced calculator machine that processes mathematical expressions through efficient string manipulation and evaluation. The calculator maintains an input string with a movable cursor and supports various operations for building and evaluating mathematical expressions.

### ✨ Key Features

- **📝 String Manipulation**: Dynamic cursor movement, character insertion, and deletion capabilities
- **🧠 Expression Evaluation**: Robust evaluation of mathematical expressions with operator precedence
- **⚡ Postfix Conversion**: Internal conversion to Reverse Polish Notation for efficient computation
- **💾 Result Caching**: Smart caching mechanism for previously computed expressions
- **🏗️ Optimized Data Structures**: Efficient implementation using linked lists and stacks
- **⏱️ Performance Optimized**: Meets strict time (1s) and memory (256MB) constraints

## 🎯 Operations

The calculator supports the following interactive commands:

| Command | Description | Example |
|---------|-------------|---------|
| `←` (`<`) | Move cursor one position left | `"12\|3"` → `"1\|23"` |
| `→` (`>`) | Move cursor one position right | `"1\|23"` → `"12\|3"` |
| `c +` | Insert character `c` at cursor position | `"12\|3"` + `4` → `"124\|3"` |
| `-` | Delete character before cursor | `"12\|3"` → `"1\|3"` |
| `?` | Display current string with cursor position | Shows `"12\|3"` |
| `!` | Evaluate expression and display result | `"12+3"` → `15` |

## 🏗️ Architecture & Implementation

### 🔧 Technical Design
``` bash
Input String → [Parser] → [Postfix Converter] → [Evaluator] → Result
↑ ↑ ↑
[Cursor Manager] [Operator Stack] [Operand Stack]
```

### 📦 Data Structures Used

- **🔗 Linked List**: For efficient string manipulation and cursor operations
- **📚 Stack**: For expression parsing and evaluation (both operator and operand stacks)
- **🗃️ Cache**: For storing previously computed results

### ⚙️ Algorithmic Approach

1. **String Representation**: Uses a doubly linked list for O(1) insertion/deletion at cursor position
2. **Expression Parsing**: Implements Shunting-yard algorithm for infix-to-postfix conversion
3. **Evaluation**: Uses stack-based postfix evaluation with proper operator precedence
4. **Caching**: Memoization technique to avoid redundant computations

## 🚦 Performance Constraints

- **⏰ Time Limit**: 1 second per operation
- **💾 Memory Limit**: 256 MB total usage
- **📊 Complexity**: O(n) for most operations, optimized for large inputs

## 📸 Example Usage

### 🖥️ Input Example
```bash
>> 1+2+3?
>> 4+<!
>> <5+!
```

### 📋 Output Example
```bash
>> 1+2+3|
>> 6
>> 65
>> 1+2+35|
```


## 🛠️ Installation & Usage

### 📋 Prerequisites
- C++ Compiler (GCC, Clang, or MSVC)
- C++11 or higher support

### 🚀 Compilation
```bash
g++ -std=c++11 -O2 main.cpp -o calculator
```
### 🎮 Running the Program
```bash
./calculator
```
## 📁 Repository Structure
``` bash
Calculator/
├── Calculator.cpp       # Main program entry point
└── README.md            # This file
```

## 📜 License
📄 This project is licensed under the MIT License - see the LICENSE file for details.
