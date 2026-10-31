# 作业代码

C/C++ 课堂练习，按时间顺序整理。原始文件散落在 `D:\xmmdev`（小熊猫 C++ 安装目录）和 `D:\cun` 下，已集中到这里。

## 目录

| # | 目录 | 内容 | 语言 | 日期 |
|---|------|------|------|------|
| 01 | [`01-hello-variables`](01-hello-variables/main.cpp) | 定义变量并输出 | C++ | 2026-10-11 |
| 02 | [`02-print-0-to-9`](02-print-0-to-9/main.cpp) | 循环输出 0–9（原 `zuoye3.c`） | C++ | 2026-10-19 |
| 03 | [`03-name-and-age`](03-name-and-age/main.c) | 输入姓名和年龄并输出 | C | 2026-10-21 |
| 04 | [`04-array-reverse`](04-array-reverse/main.cpp) | 数组首尾交换实现逆序 | C++ | 2026-10-22 |
| 05 | [`05-perfect-numbers`](05-perfect-numbers/main.cpp) | 找出完数并输出因子分解式 | C++ | 2026-10-24 |
| 06 | [`06-factorial`](06-factorial/main.cpp) | 计算 n 的阶乘 | C++ | 2026-10-28 |
| 07 | [`07-divisible-by-3-ending-6`](07-divisible-by-3-ending-6/main.cpp) | 1000 以内能被 3 整除且个位是 6 的数 | C++ | 2026-10-29 |
| 08 | [`08-alternating-series`](08-alternating-series/main.cpp) | 交错级数 1 − 1/4 + 1/7 − … 求和 | C++ | 2026-10-31 |

## 编译运行

单个文件直接编译：

```bash
g++ -std=c++17 -O2 -o main main.cpp
./main
```

C 文件用 `gcc`：

```bash
gcc -o main main.c
./main
```

## 待修改

- `02-print-0-to-9/main.cpp`：`main` 函数多了一个 `}`，目前编译不通过。
- `06-factorial/main.cpp`：算完 `sum` 后没有输出，且 `long long` 在 n > 20 时会溢出。

## 说明

- 源文件统一转为 UTF-8 编码（`01` 原文件是 UTF-8 被 GBK 读取导致的乱码，已修正）。
- `.exe`、`Debug/`、`x64/`、`.vs/` 等编译产物和 IDE 缓存已通过 `.gitignore` 排除。
