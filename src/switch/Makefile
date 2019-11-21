GENSRCS = WatchMain.cpp WatchMain.h
EMFRPOPTS = --cpp --nomain

.PHONY: clean allclean

$(GENSRCS): WatchMainGen.mfrp
	emfrp $(EMFRPOPTS) $<

clean:
	$(RM) $(GENSRCS)
