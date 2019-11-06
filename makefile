clase25.dat : clase25.x
	./clase25.x

numeros.x : numeros.cpp
	c++ clase25.cpp -o clase25.x
	
clean : 
	rm clase25.x clase25.dat