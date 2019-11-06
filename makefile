numeros.dat : numeros.x
	./numeros.x > numeros.dat

numeros.x : numeros.cpp
	c++ numeros.cpp -o numeros.x
	
clean : 
	rm numeros.x numeros.dat