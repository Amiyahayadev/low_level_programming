#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#define BUFFER_SIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/*void print_error(int error_code, char *file_name);*/
void cp(int fd_from, int fd_to, char *file_from, char *file_to);
void check_file_close(int ret);
int _strlen(char *s);
void handle_read_error(int fd, char *file_name);
void handle_write_error(int fd, char *file_name);

#endif
