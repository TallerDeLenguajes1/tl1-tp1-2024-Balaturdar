# Ejercicio 2 - Repaso de punteros

## Punto 2
### ¿Por qué es conveniente incluirlo?¿cuando se debe hacer?

- Es conveniente para que Git no muestre los archivos que uno no quiere agregar como _untraked_ , por ejemplo archivos temporales, logs.
Tambien es util para no subir estos archivos al repositorios remotos como github.

### ¿Cómo configuraría el archivo .gitignore?

- Se debe escribir la ruta del archivo a ignorar dentro de la carpeta,tambien se pueden usar wildcards como *, ?, [], para incluir varios archivos que encajen en un patron, por ejemplo: /log/[a..c]*.log ignorara todos los archivos de la carpeta log que empiecen con letras de "a" a "c" que sean .log .

https://git-scm.com/book/en/v2/Git-Basics-Recording-Changes-to-the-Repository#_ignoring

https://git-scm.com/docs/gitignore

## Punto 3

### e)Revise los archivos subidos en su repositorio de github. ¿Qué archivos vé?¿Cuál cree que no hace falta que esté?

- En el repositorio se encuentran los archivos .gitignore, README.md y tp1_1.cpp. En mi caso subi los archivos antes de compilar, pero una vez compilado sobraria el ejecutable tp1_1.exe .

### g)Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué? 

- El resultado es el mismo ya que la utilidad de una variable de tipo puntero es almacenar una direccion de memoria para poder acceder a su contenido, en este caso el contenido del puntero es la direccion de la variable por eso son iguales.
- En el punto 4 el resultado es diferente a los anteriores ya que aunque el puntero almacena una direccion de memoria, tambien se encuentra alojada en una direccion de memoria.