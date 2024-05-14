# WordCount

## Project Introduction

`WordCount` is a command-line program written in C that counts the number of characters or words in a text file. Spaces, horizontal tabs, and newline characters are all considered characters. Strings separated by spaces or commas are considered words, and no validity check is performed on the words. For example, `thi#,that` is considered two words separated by a comma.

## Function Description

The program can count the number of characters or words in a text file based on the input parameter:

- `-c` parameter: counts the number of characters.
- `-w` parameter: counts the number of words.

## File Structure

```
.
├── README.md        # Project description file
├── README_en.md     # Project description file in English
├── main.c           # Main source file
├── makefile         # Build configuration file
├── test.txt         # Sample text file
└── utils.h          # Header file (utility functions)
```

## Compilation and Execution

### Compilation

Ensure you have the `clang` compiler installed and are in the project directory. Run the following command to compile the project:

```sh
make
```

If you do not have `clang`, you can manually modify the `CC` variable in the Makefile to your compiler of choice:

```makefile
CC = <your_compiler> # like clang, gcc...
```

### Execution

After successful compilation, you can run the program using the following commands:

```sh
./WordCount -c <fileName>
```

or

```sh
./WordCount -w <fileName>
```

- `-c` parameter: counts the number of characters in the `fileName` file.
- `-w` parameter: counts the number of words in the `fileName` file.

### Cleanup

Run the following command to remove the compiled executable:

```sh
make clean
```

## Example

Suppose the `test.txt` file contains the following content:

```
Peter Griffin, Lois Griffin, Meg Griffin, Chris Griffin, Stewie Griffin, Brian Griffin, Glenn Quagmire, Cleveland Brown, Joe Swanson, Herbert, Mort Goldman, Mayor Adam West, Tom Tucker, Angela
```

Running the command `./WordCount -c test.txt` will output:

```
Characters: 193
```

Running the command `./WordCount -w test.txt` will output:

```
Words: 27
```

## Contribution

Questions or contributions are welcome. If you have any suggestions or issues, please submit an issue or a pull request.
