GENSRCS = WatchMain.cpp WatchMain.h
EMFRPOPTS = --cpp --nomain

.PHONY: clean allclean

$(GENSRCS): WatchMain.mfrp Watch.mfrp Watchlib.mfrp
	emfrp $(EMFRPOPTS) $<

clean:
	$(RM) $(GENSRCS)
