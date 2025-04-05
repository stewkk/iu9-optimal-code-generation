all:
	mkdir -p plugin
	g++ -g -Wall -Wextra -std=c++14 -I`gcc -print-file-name=plugin`/include -fPIC -fno-rtti -shared src/gimple-debug/gimple-debug.cpp -o plugin/gimple-debug.so

test:
	gcc -fplugin=plugin/gimple-debug.so -O0 src/test/test.c -o src/test/test
	rm src/test/test

.PHONY: clean

clean:
	rm -rf plugin src/test/test
