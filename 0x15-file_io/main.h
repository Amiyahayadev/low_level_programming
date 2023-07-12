#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(int error_code, const char *file_name);
int cp(const char *file_from, const char *file_to);
void copy_file_contents(int fd_from, int fd_to, const char *file_to, const char *file_from);
int _strlen(char *s);

#endif
