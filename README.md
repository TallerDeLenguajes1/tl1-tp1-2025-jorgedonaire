#gitignore

## ¿Por qué es conveniente incluirlo?

Evitar archivos innecesarios: Excluye archivos generados automáticamente (como logs, caché, dependencias, archivos de compilación, etc.), lo que mantiene el repositorio limpio y eficiente.
Mejorar el rendimiento: Al evitar que archivos grandes o temporales sean rastreados por Git, se reduce el tamaño del repositorio y se mejora la velocidad de las operaciones.

Proteger información sensible: Puedes asegurarte de que archivos con credenciales, configuraciones locales o claves API no se suban accidentalmente al repositorio.

Facilitar la colaboración: Evita que cada colaborador tenga que manejar manualmente qué archivos no deben subirse, asegurando que todos trabajen con el mismo criterio de exclusión.
## ¿Cuándo se debe hacer?

Se debe hacer al inicio de la carpeta/repositorio donde vamos a trabajar, antes de comenzar a avanzar en el proyecto.

## ¿Cómo configuraría el archivo .gitignore?
Incluiria reglas que me permitan ingnorar los archivos que no me interesen que se versionen, dejando solo los importantes.

## Incluya en su repositorio una regla de cómo ignorar un archivo ignorado.txt
*ignorado.txt

## Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?
Los resultados de los apartados 2 y 3 son iguales, ya que el puntero copia y guarda la dirección de memoria de la variable numero, que es justamente lo que se pide mostrar en el apartado 3.
En el apartado 4 obtenemos la dirección de memoria del puntero Pnumero, es decir el lugar de memoria donde se guarda el lugar de memoria de la variable numero. Logicamente este lugar no sera el mismo que la variable numero, por eso al mostrar por pantalla este muestra otro valor.

[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)
