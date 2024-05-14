# WordCount

简体中文 | [English](./README_en.md)

## 项目简介

`WordCount` 是一个用 C 语言编写的命令行程序，用于统计文本文件中的字符数或单词数。空格、水平制表符和换行符均算作字符。由空格或逗号分隔开的字符串视为单词，不做单词的有效性校验。例如：`thi#,that` 被视为用逗号隔开的两个单词。

## 功能说明

该程序可以根据输入的参数统计文本文件中的字符数或单词数：

- `-c` 参数：统计字符数。
- `-w` 参数：统计单词数。

## 文件结构

```
.
├── README.md        # 项目说明文件
├── main.c           # 主源文件
├── makefile         # 编译配置文件
├── test.txt         # 示例文本文件
└── utils.h          # 头文件 (工具函数)
```

## 编译与运行

### 编译

确保你已安装 `clang` 编译器并处于项目目录下。在终端中运行以下命令编译项目：

```zsh
make
```

如果你没有 `clang`，可以手动个修改 Makefile 的 CC 变量为你自己的编译器：

```makefile
CC = <your_compiler> # like clang, gcc...
```

### 运行

编译成功后，可以使用以下命令运行程序：

```sh
./WordCount -c <fileName>
```

或

```sh
./WordCount -w <fileName>
```

- `-c` 参数：统计 `fileName` 文件中的字符数。
- `-w` 参数：统计 `fileName` 文件中的单词数。

### 清理

运行以下命令删除编译生成的可执行文件：

```sh
make clean
```

## 示例

假设 `test.txt` 文件内容如下：

```
Peter Griffin, Lois Griffin, Meg Griffin, Chris Griffin, Stewie Griffin, Brian Griffin, Glenn Quagmire, Cleveland Brown, Joe Swanson, Herbert, Mort Goldman, Mayor Adam West, Tom Tucker, Angela

```

运行命令 `./WordCount -c test.txt` 将输出：

```
字符数：193
```

运行命令 `./WordCount -w test.txt` 将输出：

```
单词数：27
```

## 贡献

欢迎提出问题或贡献代码。如果有任何建议或问题，请提交 issue 或 pull request。
