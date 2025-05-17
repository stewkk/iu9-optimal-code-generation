run: build
	@./compiler

build:
	@clang++ -g -O0 compiler.cpp `~/c/llvm-project/build/bin/llvm-config --cxxflags --ldflags --system-libs --libs core` -o compiler

.PHONY: build run
