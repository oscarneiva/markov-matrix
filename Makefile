msg:
	@echo "To Download dependencies:"
	@echo "\tmake download\n"
	@echo "To Compile:"
	@echo "\tmake compile\n"
	@echo "To Run:"
	@echo "\tmake run\n"
	

#download:
#	sudo apt-get install freeglut3 freeglut3-dev
#	sudo apt-get install binutils-gold

compile:
	g++ test.cpp -o test

run:
	./test
