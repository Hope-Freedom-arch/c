# Computer System Learning Roadmap

目标：把计算机从“黑盒”变成“透明机器”。

这份路线覆盖从 **电子电路 → CPU → 操作系统 → 网络 → 编译器 → 系统项目** 的完整体系。

---

# 计算机系统整体结构

```
电子电路
↓
数字逻辑
↓
CPU结构
↓
机器语言 / 汇编
↓
C语言与内存模型
↓
数据结构
↓
计算机系统
↓
操作系统
↓
计算机网络
↓
形式语言与自动机
↓
编译器
↓
系统项目
```

---

# 1 电子电路

目标：理解计算机的物理基础。

核心概念：

- 电压
- 电流
- 晶体管
- MOSFET
- 开关电路

推荐课程：

MIT 6.002 Circuits and Electronics

推荐书：

The Art of Electronics

建议：

系统程序员只需要理解 **晶体管如何作为开关**。

---

# 2 数字逻辑

目标：理解逻辑如何构成计算机。

核心概念：

- AND
- OR
- NOT
- NAND
- 触发器
- 寄存器
- ALU

推荐课程：

Nand2Tetris

推荐书：

The Elements of Computing Systems

学习成果：

```
NAND
↓
逻辑门
↓
ALU
↓
CPU
↓
简单操作系统
```

---

# 3 CPU结构

目标：理解 CPU 如何执行程序。

核心问题：

- 指令如何执行
- 程序计数器如何变化
- 寄存器如何工作
- 缓存如何提高性能

推荐课程：

Berkeley CS61C

推荐书：

Computer Organization and Design

重点：

- RISC-V
- Pipeline
- Cache

---

# 4 机器语言 / 汇编

目标：理解程序如何变成机器指令。

推荐课程：

CMU 15-213 Introduction to Computer Systems

推荐书：

Computer Systems: A Programmer's Perspective

核心知识：

- 汇编语言
- 栈帧
- 函数调用
- 程序链接
- 异常控制流

必做实验：

- Data Lab
- Bomb Lab
- Cache Lab
- Malloc Lab
- Shell Lab

---

# 5 C语言与内存模型

目标：理解程序在内存中的真实结构。

推荐书：

The C Programming Language

核心知识：

- 指针
- 栈与堆
- 结构体对齐
- malloc / free

工具：

- gdb
- valgrind

实验：

观察变量地址和内存布局。

---

# 6 数据结构与算法

目标：理解程序如何组织数据。

推荐课程：

MIT 6.006 Introduction to Algorithms

推荐书：

Introduction to Algorithms

需要实现：

- 链表
- 栈
- 队列
- 二叉树
- 堆
- 哈希表
- 图

建议：

**全部用 C 语言实现。**

---

# 7 计算机系统

目标：理解程序运行的完整过程。

推荐书：

Computer Systems: A Programmer's Perspective

重点内容：

- 缓存
- 虚拟内存
- 程序链接
- 异常
- 进程模型

---

# 8 操作系统

目标：理解系统如何管理资源。

推荐课程：

MIT 6.S081 Operating System Engineering

推荐书：

Operating Systems: Three Easy Pieces

核心概念：

- 进程
- 线程
- 调度
- 虚拟内存
- 文件系统
- 系统调用

实验：

实现简化版 Unix 内核（xv6）。

---

# 9 计算机网络

目标：理解计算机之间如何通信。

推荐课程：

Stanford CS144 Computer Networking

推荐书：

Computer Networking: A Top-Down Approach

核心知识：

- TCP
- UDP
- HTTP
- Socket
- 拥塞控制

项目：

实现一个 HTTP 服务器。

---

# 10 形式语言与自动机

目标：理解编程语言的数学基础。

推荐课程：

MIT 6.045 Automata Theory

推荐书：

Introduction to the Theory of Computation

学习内容：

- DFA
- NFA
- 上下文无关文法
- 图灵机

项目：

实现一个正则表达式引擎。

---

# 11 编译器

目标：理解程序如何被翻译为机器代码。

推荐课程：

Stanford CS143 Compilers

推荐书：

Compilers: Principles, Techniques, and Tools

编译流程：

```
源码
↓
词法分析
↓
语法分析
↓
抽象语法树
↓
中间代码
↓
机器代码
```

项目：

写一个简单编译器。

示例语言：

```
a = (1+2)*3
print(a)
```

---

# 12 系统项目

最终目标：把所有知识整合。

推荐项目：

### HTTP服务器

实现：

- socket
- HTTP解析
- 多线程

### Shell

实现：

- fork
- exec
- pipe

### 正则引擎

实现：

- NFA
- DFA

### 小型数据库

实现：

- B-tree
- 查询引擎

---

# 最终理解

完整计算机结构：

```
程序
↓
编译器
↓
汇编
↓
机器指令
↓
CPU
↓
缓存
↓
内存
↓
操作系统
↓
设备
```

学习目标：

让计算机从 **黑盒 → 可理解的机器**。
