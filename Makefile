BUILD_DIR    := $(shell pwd)/object
INSTALL_DIR  := $(shell pwd)/package
SRC_DIR      := $(shell pwd)
.PHONY :build clean test-mdfs.client
build:
	mkdir -p $(BUILD_DIR)
	mkdir -p $(INSTALL_DIR)
	cd $(BUILD_DIR) && cmake -DCMAKE_INSTALL_PREFIX=$(INSTALL_DIR) $(SRC_DIR) && make VERBOSE=2 && make VERBOSE=2 install
clean:
	rm -rf $(BUILD_DIR)
	rm -rf $(INSTALL_DIR)

test-mdfs.client:build
	$(INSTALL_DIR)/bin/mdfs.client
#	$(INSTALL_DIR)/bin/mdfs.client -usage
	$(INSTALL_DIR)/bin/mdfs.client -copyFromLocal ./README.md mdfs:///README.md
	$(INSTALL_DIR)/bin/mdfs.client -copyToLocal mdfs:///README.md ./README.md 
