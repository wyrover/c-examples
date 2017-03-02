# c-examples


## 函数指针的定义方式

``` cpp
return type (*variable_name)(parameters list)
```

例子

```
1. 将被指针指向的函数 
int add(int x, int y);

2. 指向上面的函数的函数指针类型
int (*addfuncptr)(int x, int y);

3. 返回指针类型的函数
int* plus(int x, int y);

4. 指向上面的函数的函数指针类型
int* (*plusfuncptr)(int x, int y);
```

给函数指针初始化（赋值）的方式

**1. with the "address of" operator**
**2. via an implicit assignment**



## src/c-function-pointers-01

函数指针用法

## src/c-function-pointers-02

函数指针用法

可通过 ollydbg 反汇编代码，查看汇编层面的函数直接调用和函数指针间接调用