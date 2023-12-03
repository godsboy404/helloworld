#include <stdio.h>

int main() {
    int characterCount = 0;
    int lineCount = 0;
    int wordCount = 0;
    char ch;
    int inWord = 0;

    printf("请输入文本；键入“EOF”以结束输入，回车显示所求：\n");

    while ((ch = getchar()) != EOF) 
    {
        characterCount++;

        if (ch == '\n') 
        {
            lineCount++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') 
        {
            inWord = 0;
        } 
        else if (inWord == 0) 
        {
            inWord = 1;
            wordCount++;
        }
    }

    printf("字符数：%d\n行数：%d\n单词数：%d\n", characterCount, lineCount, wordCount);

    return 0;
}
