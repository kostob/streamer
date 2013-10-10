SUBDIRS = ChunkIDSet ChunkTrading TopologyManager ChunkBuffer PeerSet Scheduler
     
.PHONY: subdirs $(SUBDIRS)
     
all:
	for dir in $(SUBDIRS); do \
		gmake -C $$dir; \
	done

tests: all
	make -C Tests

clean:
	for dir in $(SUBDIRS); do \
		gmake -C $$dir clean; \
	done

allclean: clean
	rm -f *.o
	gmake -C Tests clean
