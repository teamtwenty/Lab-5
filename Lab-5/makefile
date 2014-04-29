CrossReferenc : main.o Identifier.o IdentifierBinaryTree.o Integer.o LineNumberList.o Print.o Real.o Scanner.o String.o Token.o
	g++ -Wall main.o Identifier.o IdentifierBinaryTree.o Integer.o LineNumberList.o Print.o Real.o Scanner.o String.o Token.o -o CrossReference

main.o : main.cpp common.h Print.h Scanner.h Token.h IdentifierBinaryTree.h
	g++ -c -Wall main.cpp -o main.o

Identifier.o : Identifier.cpp Identifier.h
	g++ -c -Wall Identifier.cpp -o Identifier.o

IdentifierBinaryTree.o : IdentifierBinaryTree.cpp IdentifierBinaryTree.h LineNumberList.h
	g++ -c -Wall IdentifierBinaryTree.cpp -o IdentifierBinaryTree.o

Integer.o : Integer.cpp Integer.h
	g++ -c -Wall Integer.cpp -o Integer.o

LineNumberList.o : LineNumberList.cpp LineNumberList.h
	g++ -c -Wall LineNumberList.cpp -o LineNumberList.o

Print.o : Print.cpp Print.h
	g++ -c -Wall Print.cpp -o Print.o

Real.o : Real.cpp Real.h
	g++ -c -Wall Real.cpp -o Real.o

Scanner.o : Scanner.cpp Scanner.h Print.h
	g++ -c -Wall Scanner.cpp -o Scanner.o

String.o : String.cpp String.h
	g++ -c -Wall String.cpp -o String.o

Token.o : Token.cpp Token.h
	g++ -c -Wall Token.cpp -o Token.o
