BUILD_DIR  := object
.PHONY :build clean test-mdfs.client
build:
	mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && cmake ../ && make
clean:
	rm -r $(BUILD_DIR)

test-mdfs.client:
	$(BUILD_DIR)/program/mdfs.client/mdfs.client -appendToFile /user/ mdfs://
