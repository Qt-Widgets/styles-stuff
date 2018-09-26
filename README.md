styling-stuff
============

Este estilo se adapta a las identidades marcarias de la UCI, puede usarse en aplicaciones 
escritas en Qt/C++.

This style adapts to the brand identities of the UCI, can be used in applications written in Qt / C ++.

Use
===
El proyecto es un plugin de estilo, para instalarlo:

1- Elegir la identidad a segir. Para esto se debe descomentar en el fichero Material.pro
   el DEFINES correspondiente a una de las identidades (xilema, xabal, xauce, xedro y xavia).

2- Compilar e instalar.
#qmake-qt5 Material.pro
#make
#make install
* El make install se debe ejecutar como sudo en dependencia de donde esté instalado el Qt

3- Una vez instalado el estilo puede usarse de varias formas:
- Desde la linea de comandos con el parámetro -style
- Desde el código:
qApp->setStyle(QStyleFactory::create("Material");

* Aunque el nombre del estilo sea Material no está relacionado con Google :)
------------------------------------------------------------------------------------

The project is a style plugin, to install it:

1- Choose the identity to segir. For this, the DEFINES corresponding to one of the identities (xilema, xabal, xauce, xedro and xavia) must be decomposed in the Material.pro file.

2- Compile and install. # qmake-qt5 Material.pro #make #make install

The make install must be run as sudo depending on where the Qt is installed
3- Once installed the style can be used in several ways:

From the command line with the -style parameter
From the code: qApp-> setStyle (QStyleFactory :: create ("Material");
Although the name of the style is Material is not related to Google :)
