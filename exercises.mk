MICROCONTROLLER_ESP32_EXERCISES_DIR=ejercicios/microcontroladores/esp32
MICROCONTROLLER_ESP32_EXERCISES_FILES=$(wildcard $(MICROCONTROLLER_ESP32_EXERCISES_DIR)/*.cpp)
TEMP_DIR=.tmp
NOTES_DIR=notas
NOTES_FILES=$(wildcard $(NOTES_DIR)/*.org)

$(TEMP_DIR):
	mkdir --verbose $@

update-list-exercises: $(TEMP_DIR) $(TEMP_DIR)/ejercicios-resueltos.txt README.org

README.org: $(NOTES_FILES) $(TEMP_DIR)/ejercicios-resueltos.txt
	cat $^ > $@

$(TEMP_DIR)/ejercicios-resueltos.txt: $(TEMP_DIR)/microcontrolador-esp32-ejercicios.txt
	@$(TRUNCATE_CLEAR_CONTENT) $@
	echo $(basename $(notdir $@)) | $(TR_FORMAT_FILE_NAMES) | $(SED_FORMAT_HEADER) >> $@
	$(foreach archivo, $^,\
		echo "$(basename ** $(notdir $(archivo))) (actualizado, $(shell $(DATE_NOW)))" >> $@; \
		cat $(archivo) >> $@ ; \
	)

$(TEMP_DIR)/microcontrolador-esp32-ejercicios.txt: $(MICROCONTROLLER_ESP32_EXERCISES_FILES)
	@$(TRUNCATE_CLEAR_CONTENT) $@
	@$(foreach archivo, $^, \
		echo "$(basename $(notdir $(archivo)))" \
		| $(TR_FORMAT_FILE_NAMES) \
		| $(SED_FORMAT_ITEM_LIST) \
		>> $@ ; \
	)

clean:
	@$(RM) $(TEMP_DIR)/*.txt

.PHONE: clean update-list-exercises
