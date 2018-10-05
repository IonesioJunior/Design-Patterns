# Makefile to compile java code using javac
# Util to compile/create packages using command line

all: AbstractFactoryPatternDemo 

JAVAC=/usr/bin/javac
JAVA=/usr/bin/java 
JAR=/usr/bin/jar 

BIN_PATH=bin
JAR_PATH=jars

ROOT_PATH=. 

#Compile
%.class: %.java
	rm -rf $(BIN_PATH) && mkdir $(BIN_PATH)
	$(JAVAC) -g -d $(BIN_PATH) -classpath .:$(ROOT_PATH) $^

#Exec
AbstractFactoryPatternDemo: AbstractFactoryPatternDemo.class
	cd $(BIN_PATH) && $(JAVA) -classpath .:$(BIN_PATH) $@

#Generate Package
%.jar: %.class
	mkdir -p $(JAR_PATH)
	$(JAR) cfe $(JAR_PATH)/$@ $(subst /,.,$*) -C $(BIN_PATH) $(ROOT_PATH)  
clean:
	rm -rf ./bin
	rm -rf ./jars
