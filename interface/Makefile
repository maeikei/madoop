LANGS_TARGETS := php
LANGS_TARGETS += ruby
LANGS_TARGETS += java
LANGS_TARGETS += lua

.PHONY: all $(LANGS_TARGETS)
all:$(LANGS_TARGETS)
#	mkdir -p ./php/mdfs
#	swig -I./cpp/  -outdir ./php/mdfs/ -php ./swig/mdfs/mdfs.i
#	mv ./swig/mdfs/*_wrap.c ./php/mdfs/

$(LANGS_TARGETS):
	mkdir -p ./$@/mdfs
	swig -I./cpp/  -outdir ./$@/mdfs/ -$@ ./swig/mdfs/mdfs.i
	mv ./swig/mdfs/*_wrap.c ./$@/mdfs/
