#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void countCharacters(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }

    int characterCount = 0;
    char c;
    while ((c = fgetc(file)) != EOF)
    {
        characterCount++;
    }

    fclose(file);
    printf("字符数：%d\n", characterCount);
}

void countWords(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }

    int wordCount = 0;
    char c;
    int inWord = 0;

    while ((c = fgetc(file)) != EOF)
    {
        if (isspace(c) || c == ',')
        {
            if (inWord)
            {
                inWord = 0;
                wordCount++;
            }
        }
        else
        {
            inWord = 1;
        }
    }
    // 特殊情况：如果整个文件就是一个大单词
    if (inWord)
    {
        wordCount++;
    }

    fclose(file);
    printf("单词数：%d\n", wordCount);
}