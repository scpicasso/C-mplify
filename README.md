# TPEdeTLA

Para poder correr este TP, se precisa tener los comandos 'lex' y 'yacc'. Para ello:
	1. Abrir una terminal de linux.
	2. Escribir el comando: 'sudo apt-get install bison flex'.

Instrucciones de uso:
	1. Abrir una terminal.
	2. Posicionarse en la carpeta madre del proyecto dentro de la terminal.
	3. Escribir el comando: 'make all'. Ahora se hallara un ejecutable  llamado 'c-mplify' dentro de la carpeta madre del proyecto.
	4. Para utilizar el compilador 'c-mplify', escribir el comando './c-mplify ruta_del_archivo'.

Borrado de archivos basura:
	1. Abrir una terminal.
	2. Posicionarse en la carpeta madre del proyecto dentro de la terminal.
	3. Escribir el comando: 'make clean'. Ahora, se han eliminado todos los archivos generados por la instruccion 'make all'. Esto incluye al compilador c-mplify,
	   pero no incluye al archivo ejecutable, ya que el su nombre depende del programador responsable de usar este compilador.

Ejemplos:
	Dentro de la carpeta Examples, se hallan ejemplos de como es el codigo en el lenguaje c-mplify. Estos codigos tienen permitida su edicion, aunque se recomienda
	no modificarlos. De querer hacer un nuevo ejemplo o crear un nuevo programa, escribir las instrucciones de la misma forma que se indica en los ejemplos. Las reglas
	de este lenguaje no seran escritas en este readme, pero se pueden apreciar en otra parte.



