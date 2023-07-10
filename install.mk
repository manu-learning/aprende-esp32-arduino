CIRCUIT_SIMULATORS_DIR=simuladores-de-circuitos

QUCSS_VERSION=1.1.0
QUCSS_NAME=Qucs-S-v$(QUCSS_VERSION).x86_64.AppImage
QUCSS_URL_DOWNLOAD=https://github.com/ra3xdh/qucs_s/releases/download/$(QUCSS_VERSION)/$(QUCSS_NAME)

##@ Herramientas de Cálculo Matemático (Instalación/Ejecución)
install-wxmaxima: ## interfáz gráfica de Maxima
	sudo aptitude install wxmaxima

# TODO: debería ejecutar en foreground sin ocupar la terminal actual
run-wxmaxima: ##
	wxmaxima

##@ Procesadores de Documento (Instalación/Ejecución)
install-lyx: ## utiliza LaTeX
	sudo aptitude install lyx

# TODO: debería ejecutar en foreground sin ocupar la terminal actual
run-lyx:
	lyx

##@ Simuladores (Instalación/Ejecución)

# Nota sobre las opciones de curl:
# - si sólo utilizamos `curl -O url-del-binario-github` entonces no se descargará de manera correcta
# - si utilizamos las opciónes -L -J además de -O, entonces se descargará de forma correcta
#
# Opciones de curl mencionadas:
# - opción -L		por --location
# - opción -J 	por --remote-header-name
# - opción -O 	por --remote-name
#
install-qucss: install-qucss-dependencies ## simulador sólo con diseño esquemático (recomendado)
	cd $(CIRCUIT_SIMULATORS_DIR) \
	&& curl --location --remote-header-name --remote-name $(QUCSS_URL_DOWNLOAD) \
	&& chmod u+x $(QUCSS_NAME)

install-qucss-dependencies:
	sudo aptitude install ngspice build-essential cmake qtbase5-dev qttools5-dev libqt5svg5-dev flex bison

install-fritzing: ## simulación en protoboard + diseño esquemático + diseño de PCB (recomendado)
	sudo aptitude install fritzing

install-qucs: ## simulador Qucs (más antiguo)
	sudo apt-add-repository ppa:qucs/qucs \
	&& sudo aptitude install qucs

install-oregano: ##
	sudo aptitude install oregano

run-fritzing: ##
	fritzing

run-qucss: ##
	cd $(CIRCUIT_SIMULATORS_DIR) \
        && ./$(QUCSS_NAME)

run-oregano: ##
	oregano

