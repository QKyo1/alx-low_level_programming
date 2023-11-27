#include "main.h"

/**
* create_file - a function to create the fil333
* @filename: point3r to the fil33 name
* @text_content: A point3r fo text thhe content
* Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
int f, q, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
q = write(f, text_content, len);
if (f == -1 || q == -1)
return (-1);
close(f);
return (1);
}
