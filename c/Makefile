.PHONY = all run clean

CC := cc

CFLAGS := -std=c17 -O0 -g
LIBS := -lm

SRCDIR := src
BLDDIR := build
DSTDIR := dist

MAIN := main

SRCS := $(filter-out $(SRCDIR)/$(MAIN).c, $(shell find $(SRCDIR) -name "*.c"))
OBJS := $(SRCS:$(SRCDIR)/%.c=$(BLDDIR)/%.o)

all: $(DSTDIR)/$(MAIN)

$(BLDDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(DSTDIR)/$(MAIN): $(SRCDIR)/$(MAIN).c $(OBJS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $^ -o $@ $(LIBS)

run:
	cd $(DSTDIR) && ./$(MAIN)

clean:
	rm -rvf $(BLDDIR) $(DSTDIR)
