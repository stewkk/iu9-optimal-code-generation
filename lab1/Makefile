all:
	mkdir -p plugin
	g++ -g -Wall -Wextra -std=c++14 -I`gcc -print-file-name=plugin`/include -fPIC -fno-rtti -shared src/gimple-debug/gimple-debug.cpp -o plugin/gimple-debug.so

test:
	gcc -fplugin=plugin/gimple-debug.so -O0 src/test/test.c -o src/test/test

ssa-graph:
	gcc -O0 -fdump-tree-ssa-graph -g src/test/test.c -o test

.PHONY: clean all test ssa-graph

clean:
	rm -rf plugin src/test/test
