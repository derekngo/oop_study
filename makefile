all:

count: count.c++
	g++-4.7 -pedantic -std=c++11 -Wall count.c++ -o count

equals: equals.c++
	g++-4.7 -pedantic -std=c++11 -Wall equals.c++ -o equals

fill: fill.c++
	g++-4.7 -pedantic -std=c++11 -Wall fill.c++ -o fill

find: find.c++
	g++-4.7 -pedantic -std=c++11 -Wall find.c++ -o find

remove: remove.c++
	g++-4.7 -pedantic -std=c++11 -Wall remove.c++ -o remove

reverse: reverse.c++
	g++-4.7 -pedantic -std=c++11 -Wall reverse.c++ -o reverse
