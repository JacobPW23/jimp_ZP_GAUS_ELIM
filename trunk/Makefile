all:
	gcc -Wall --pedantic src/*.c -o bin/gauss

test: all
	bin/gauss dane/A dane/b
	bin/gauss dane/3A dane/3b
	bin/gauss dane/4A dane/4b
	bin/gauss dane/5x4A dane/5x4b
	bin/gauss dane/OA dane/Ob
	bin/gauss dane/2A dane/2b
