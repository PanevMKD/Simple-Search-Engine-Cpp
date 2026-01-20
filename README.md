# Simple Search Engine (C++)

## Overview
A lightweight command-line tool written in C++ that scans text files for specific keywords. It demonstrates efficient file handling and string manipulation logic.

## Features
* **Real-time Parsing:** Scans files line-by-line using `std::ifstream`.
* **String Matching:** Identifies substrings within larger text blocks.
* **Error Handling:** Manages missing files or invalid inputs gracefully.

## Tech Stack
* C++ (Standard Library)
* Stream I/O (`<fstream>`, `<iostream>`)
* String Manipulation (`<string>`, `<sstream>`)

## How to Run
1.  Compile the code: `g++ "Mini Search Engine.cpp" -o search`
2.  Run the executable: `./search`
3.  Enter the filename (e.g., `Data.txt`) and your search term.
