#include <stdio.h>
#include "uills.h"

int main(int argc, char *argv[])
{
	// 用户输入参数有误
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s -c|-w <input_file_name>\n", argv[0]);
        return 1;
    }

    const char *option = argv[1];
    const char *filename = argv[2];

	// 解析输入参数
    if (strcmp(option, "-c") == 0)
    {
        countCharacters(filename);
    }
    else if (strcmp(option, "-w") == 0)
    {
        countWords(filename);
    }
    else
    {
        fprintf(stderr, "Invalid option: %s. Use -c for character count or -w for word count.\n", option);
        return 1;
    }

    return 0;
}
