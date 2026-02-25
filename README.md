# print-int

## Introduction

This is a simple C library that is written to print integers using the 
write() system call.

## How to Use

```c
#include "print-int.h"

int main(void)
{
	stack foo;
	initialization (&foo);
	display (&foo, 123456789);
	return (0);
}
```
## Functions

```c
#include "print-int.h"

int initialization(stack *data);
```
_Return 0 on sucess, or -1 on error_

Parameters:
* `*data`: The stack structure pointer (type `stack`)

Purpose:

To initialize the stack structure. Must be initialized on the beginning of 
program.

```c
#include "print-int.h"

int display(stack *data, int num);
```
_(Return 0 on sucess, or -1 on error)_

Parameters:
* `*data`: The stack structure pointer (type `stack`)
* `num`: Number to be displayed

Purpose:

To display the number specified by `num`. Must provide the stack to work.

## License

This project is licensed under the GNU General Public License v3.0 - see the 
[COPYING](COPYING) file for details.
