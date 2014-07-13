all: cppLibrary cppWrap cBin

cppLibrary:
	g++ -shared -fPIC -o cppLib/library.so cppLib/rary.cpp

cppWrap:
	g++ -shared -fPIC -LcppLib -lrary cppWrapper/raryWrap.cpp -o cppWrapper/libraryWrapper.so

cBin:
	gcc -LcppWrapper -lraryWrapper cbin/main.c -o main cppWrapper/libraryWrapper.so cppLib/library.so
	echo "Done!!"

clean:
	rm cppLib/library.so
	rm cppWrapper/libraryWrapper.so
	rm main
