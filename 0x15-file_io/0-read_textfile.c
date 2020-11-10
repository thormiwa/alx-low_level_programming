#include "holberton.h"

/**
* read_textfile - read text from a file and prints it
* @filename: name of file
* @letters: number of bytes
* Return: number bytes read or printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
		int filedesc;
		ssize_t bytes;
		char buf[READ_BUF_SIZE * 8];

				if (!filename || !letters)
					return (0);
				filedesc = open(filename, O_RDONLY);
				if (filedesc == -1)
					return (0);
				bytes = read(filedesc, &buf[0], letters);
				bytes = write(STDOUT_FILENO, &buf[0], bytes);
				close(filedesc);
				return (bytes);
}
