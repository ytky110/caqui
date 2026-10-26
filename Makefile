bin/caqui: main.c
	mkdir -p bin
	c89 $^ -o $@

.PHONY: clean

clean:
	rm -fr bin
