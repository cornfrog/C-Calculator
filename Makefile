all:
	@gcc calc.c -o calc
	@mv calc bin/
	@echo MAKE Success: use \'make run\' to run program

run:
	@./bin/calc

clean:
	@rm bin/calc
	@echo MAKE \'Clean\' Complete - use \'make\' to get program back
