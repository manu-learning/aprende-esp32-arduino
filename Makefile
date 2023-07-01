include utils.mk

PRACTICAS_ELEMENTALES=$(wildcard practicas/elementales/*.cpp)

actualizar-contenido: practicas-resueltas.txt README.org

README.org: objetivos.org practicas-resueltas.txt
	cat $^ > $@

practicas-resueltas.txt: practicas-elementales.txt
	@$(TRUNCATE_CLEAR_CONTENT) $@
	echo $(basename $@) | $(TR_FORMAT_FILE_NAMES) | $(SED_FORMAT_HEADER) >> $@
	$(foreach archivo, $^,\
		echo "$(basename ** $(archivo)) (actualizado, $(shell $(DATE_NOW)))" >> $@; \
		cat $(archivo) >> $@ ; \
	)

practicas-elementales.txt: $(PRACTICAS_ELEMENTALES)
	@$(TRUNCATE_CLEAR_CONTENT) $@
	@$(foreach archivo, $^, \
		echo "$(basename $(notdir $(archivo)))" \
		| $(TR_FORMAT_FILE_NAMES) \
		| $(SED_FORMAT_ITEM_LIST) \
		>> $@ ; \
	)

clean:
	@$(RM) *.txt

.PHONE: clean actualizar-listado-practicas
