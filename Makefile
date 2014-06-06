BUILD_DIR  := object
.PHONY :build clean test-mdfs.client
build:
	mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && cmake ../ && make
clean:
	rm -r $(BUILD_DIR)

test-mdfs.client:build
	$(BUILD_DIR)/program/mdfs.client/mdfs.client
#	$(BUILD_DIR)/program/mdfs.client/mdfs.client -usage
	$(BUILD_DIR)/program/mdfs.client/mdfs.client -cp ./README.md/ mdfs://
