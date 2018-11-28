.PHONY: help
.DEFAULT_GOAL=help

help:
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

compile: hello.cpp ## compile hello
#	g++ -Wall hello.cpp -o hello
#	g++ -Wall unsafe.cpp -o unsafe
	g++ -Wall segfault.cpp -o segfault

run: compile ## run hello
#	./hello
#	./unsafe
	./segfault