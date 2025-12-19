


## 1️⃣ Program: Find Length of a String Using Pointer

### 🔹 Description

This program calculates the length of a string **without using built-in functions**. It uses a **pointer** to traverse the string character by character until the null character (`\0`) is found.

### 🔹 Code

```c
#include <stdio.h>

int main() {

    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter your string: ");
    scanf("%s", str);

    ptr = str;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Length : %d\n", length);

    return 0;
}
```

### 🔹 Sample Input

```
Enter your string: hello
```

### 🔹 Sample Output

```
Length : 5
```

---

## 2️⃣ Program: Cube of 2D Array Elements Using Function

### 🔹 Description

This program accepts a **2D array** from the user and passes it to a function using a **pointer**. The function calculates and prints the **cube of each element** in the array.

### 🔹 Code

```c
#include <stdio.h>

void cubeArray(int (*p)[5], int n){
    int i, j;

    printf("Cubes:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("%d ", p[i][j] * p[i][j] * p[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[5][5], n, i, j;

    printf("Enter your array size: ");
    scanf("%d", &n);

    printf("Enter your array elements:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    cubeArray(a, n);

    return 0;
}
```

### 🔹 Sample Input

```
Enter your array size: 2
Enter your array elements:
a[0][0] = 1
a[0][1] = 2
a[1][0] = 3
a[1][1] = 4
```

### 🔹 Sample Output

```
Cubes:
1 8
27 64
```

---

## ✅ Concepts Covered

* Pointers in C
* String traversal using pointer
* 2D arrays
* Passing arrays to functions
* Nested loops

---
