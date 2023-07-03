ESP32_DOC_DIR=docs/arduino-esp32
ESP32_URL_BASE=https://raw.githubusercontent.com/espressif/arduino-esp32/master/docs/source/

DOC_EXT=rst
ESP32_DOC_API_NAMES=adc dac gpio wifi
ESP32_DOC_API_FILES= \
	$(addprefix api/, \
	$(addsuffix .$(DOC_EXT),$(ESP32_DOC_API_NAMES)))

update-doc-api-esp32:
	$(foreach DOC_FILE, $(ESP32_DOC_API_FILES), \
		curl $(ESP32_URL_BASE)/$(DOC_FILE) > $(ESP32_DOC_DIR)/$(DOC_FILE) ;\
	)
