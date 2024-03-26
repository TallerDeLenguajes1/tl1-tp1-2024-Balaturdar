#Ejercicio 2 - Repaso de punteros

##Punto 2
###¿Por qué es conveniente incluirlo?¿cuando se debe hacer?

Es conveniente para que Git no muestre los archivos que uno no quiere agregar como _untraked_, por ejemplo archivos temporales, logs.
Tambien es util para no subir estos archivos al repositorios remotos como github.

###¿Cómo configuraría el archivo .gitignore?

Se debe escribir la ruta del archivo a ignorar dentro de la carpeta,tambien se pueden usar wildcards como *, ?, [], para incluir varios archivos que encajen en un patron, por ejemplo: /log/[a..c]*.log ignorara todos los archivos de la carpeta log que empiecen con letras de "a" a "c" que sean .log
https://git-scm.com/book/en/v2/Git-Basics-Recording-Changes-to-the-Repository#_ignoring
https://git-scm.com/docs/gitignore




