libsort.a:temp_a.o
	$(shell ar cr -o libsort.a temp_a.o)	
	@rm -rf *.o

libsort.so:temp_so.o
	gcc temp_so.o -o libsort.so -fPIC -shared
	@rm -rf *.o

temp_so.o:
	gcc -c sort.c -o temp_so.o -fpic
temp_a.o:
	gcc -c sort.c -o temp_a.o
clean:
	@rm -rf *.a *.so *.o  *.out
