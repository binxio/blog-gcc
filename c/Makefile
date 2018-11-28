.PHONY: help
.DEFAULT_GOAL=help

help:
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

compile: ## compile hello
#	gcc -Wall hello.c -o hello
#	gcc -Wall unsafe.cpp -o unsafe
	gcc -Wall segfault.c -o segfault

run: compile ## run hello
#	./hello
#	./unsafe
	./segfault

