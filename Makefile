SRC_DIR      := $(shell pwd)
BUILD_DIR    := $(shell pwd)/object
INSTALL_DIR  := $(shell pwd)/package
ANALYZER_DIR := $(shell pwd)/analyzer

.PHONY :build clean test-mdfs.client
build:
	mkdir -p $(BUILD_DIR)
	mkdir -p $(INSTALL_DIR)
	cd $(BUILD_DIR) && cmake -DCMAKE_INSTALL_PREFIX=$(INSTALL_DIR) $(SRC_DIR) && make && make install
clean:
	rm -rf $(BUILD_DIR)
	rm -rf $(INSTALL_DIR)

test-mdfs.client:build
	$(INSTALL_DIR)/bin/mdfs.client
#	$(INSTALL_DIR)/bin/mdfs.client -usage
	$(INSTALL_DIR)/bin/mdfs.client -cp ./README.md mdfs:///README.md

scan-build:build
	mkdir -p $(ANALYZER_DIR)
	cd $(BUILD_DIR) && scan-build -o $(ANALYZER_DIR) make -j4
