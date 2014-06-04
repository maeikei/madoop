BUILD_DIR  := object
.PHONY :all clean
all:
	mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && cmake ../ && make
clean:
	rm -r $(BUILD_DIR)
