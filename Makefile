PROGRAM = progress_bar_v1 progress_bar_v2
CC = $(CROSS_COMPILE)gcc
SRCS = progress_bar_v1.c progress_bar_v2.c
OBJS = $(SRCS:.c=.o)

all: $(PROGRAM)
	@echo "make done!"

progress_bar_v1: progress_bar_v1.o
	$(CC) $< -o $@

progress_bar_v2: progress_bar_v2.o
	$(CC) $< -o $@

clean:
	@rm -rf *.o $(PROGRAM)
	@echo "clean done!"

.PHONY:all clean
