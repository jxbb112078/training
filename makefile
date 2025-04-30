#Test for git
#
main: main.o log.so
	gcc $< -fPIC -I. -L. -llog  -o $@

log.so: log.o
	gcc -fPIC -shared log.o -o liblog.so

%.o:%.c
	gcc -fPIC  $< -c

clean:
	rm -f *.o *.so main
