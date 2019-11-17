# ADT\_01\_c

Using a pointer to an incomplete type

```c
typedef struct MyData *MyDataPtr;
```
we can declare in the interface `.h` the alias `MyDataPtr` as a pointer to an unknown struct. It is not a problem if we use only pointers to the **unknown struct MyData**. 
 
The `main` can declare pointers `p` to the unknown struct MyData, and can use them, because **the size needed to store a pointer is independent to the size of the pointed object**. The size of the pointer depends on the architecture of the system in which it is implemented.

so,
- the main can declare variables (i.e. pointers) of MyDataPtr type
- the main can use these pointers (pass te pointer to a function, and so on
- the main can not **dereference** the pointer (i.e., can not use \*p) because the main does not have access to the data structure `MyData`, which is stored in `.c`
