CIRCUIT_SIMULATORS_DIR=simuladores-de-circuitos

QUCSS_VERSION=1.1.0
QUCSS_NAME=Qucs-S-v$(QUCSS_VERSION).x86_64.AppImage
QUCSS_URL_DOWNLOAD=https://github.com/ra3xdh/qucs_s/releases/download/$(QUCSS_VERSION)/$(QUCSS_NAME)

# Nota sobre las opciones de curl:
# - si sólo utilizamos `curl -O url-del-binario-github` entonces no se descargará de manera correcta
# - si utilizamos las opciónes -L -J además de -O, entonces se descargará de forma correcta
#
# Opciones de curl mencionadas:
# - opción -L		por --location
# - opción -J 	por --remote-header-name
# - opción -O 	por --remote-name
download-circuit-simulator-qucss: install-qucss-dependencies
	cd $(CIRCUIT_SIMULATORS_DIR) \
	&& curl --location --remote-header-name --remote-name $(QUCSS_URL_DOWNLOAD) \
	&& chmod u+x $(QUCSS_NAME)

install-qucss-dependencies:
	sudo aptitude install ngspice build-essential cmake qtbase5-dev qttools5-dev libqt5svg5-dev flex bison

install-circuit-simulator-qucs:
	sudo apt-add-repository ppa:qucs/qucs \
	&& sudo aptitude install qucs

install-circuit-simulator-oregano:
	sudo aptitude install oregano

run-circuit-simulator-qucss:
	cd $(CIRCUIT_SIMULATORS_DIR) \
	&& ./$(QUCSS_NAME)
