#include "main.h"

/**
* append_text_to_file - a function to append thee file to text
* @filename: point3r toi the fil3 name
* @text_content: point3r tfot the text conteent
* Return: 0 or 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
int e, q, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
e = open(filename, O_WRONLY | O_APPEND);
q = write(e, text_content, len);
if (e == -1 || q == -1)
return (-1);
close(e);
return (1);
}
