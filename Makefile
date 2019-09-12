
SRC = delete.c sortings.c ra.c rra.c sa.c pb.c minmax.c test.c pa.c \
	  sorttmp.c middle.c rb.c rrb.c add.c rr.c rrr.c instuct.c \
	  sorting43.c ft_small.c sort_hun.c instruct2.c sort_fivehun.c

all:
	gcc $(SRC) ./libft/libft.a
