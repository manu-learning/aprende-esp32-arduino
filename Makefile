RM=rm --verbose
TRUNCATE_CLEAR_CONTENT=truncate --size 0
TR_FORMAT_FILE_NAMES=tr '-' ' '
DATE_NOW=date +"%d-%m-%Y-%T"

PRACTICAS_ELEMENTALES=$(wildcard practicas/elementales/*.cpp)

actualizar-listado-practicas: practicas-resueltas.txt

practicas-resueltas.txt: practicas-elementales.txt
	@$(TRUNCATE_CLEAR_CONTENT) $@
	$(foreach archivo, $^,\
		echo "$(basename $(archivo)) (actualizado, $(shell $(DATE_NOW)))" >> $@; \
		cat $(archivo) >> $@ ; \
	)

practicas-elementales.txt: $(PRACTICAS_ELEMENTALES)
	@$(TRUNCATE_CLEAR_CONTENT) $@
	@$(foreach archivo, $^, \
		echo " $(basename $(notdir $(archivo))) " \
		| $(TR_FORMAT_FILE_NAMES) \
		>> $@ ; \
	)

clean:
	@$(RM) *.txt

.PHONE: clean actualizar-listado-practicas
