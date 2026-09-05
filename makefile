a.out:main.o stu_add.o stu_del_all.o stu_del.o stu_mod.o stu_rev.o stu_save.o stu_show.o stu_sort.o
	cc main.o stu_add.o stu_del_all.o stu_del.o stu_mod.o stu_rev.o stu_save.o stu_show.o stu_sort.o -o a.out

main.o:main.c
	cc -c main.c
stu_add.o:stu_add.c
	cc -c stu_add.c
stu_del_all.o:stu_del_all.c
	cc -c stu_del_all.c
stu_del.o:stu_del.c
	cc -c stu_del.c
stu_mod.o:stu_mod.c
	cc -c stu_mod.c
stu_rev.o:stu_rev.c
	cc -c stu_rev.c
stu_save.o:stu_save.c
	cc -c stu_save.c
stu_sort.o:stu_sort.c
	cc -c stu_sort.c
stu_show.o:stu_show.c
	cc -c stu_show.c
clear:
	@echo "Cleaning up..."
	@rm -vr *.o
