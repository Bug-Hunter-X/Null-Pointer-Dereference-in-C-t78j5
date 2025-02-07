# Null Pointer Dereference in C

This repository demonstrates a common error in C programming: dereferencing a NULL pointer.  This leads to undefined behavior and often results in a segmentation fault or crash. The solution shows how to avoid this error by always checking for NULL before dereferencing.

## The Bug
The `bug.c` file contains a simple C program that attempts to dereference a NULL pointer. This causes a segmentation fault.