GENSRCS = WatchMain.cpp WatchMain.h

.PHONY: help pure pure2 switch switch2 clean

help:
	@echo "usage: make dirname"

pure:
	make -C $@
	cd $@; mv $(GENSRCS) ../

pure2:
	make -C $@
	cd $@; mv $(GENSRCS) ../

switch:
	make -C $@
	cd $@; mv $(GENSRCS) ../

switch2:
	make -C $@
	cd $@; mv $(GENSRCS) ../

clean:
	$(RM) $(GENSRCS)
