// Fermín Narváez Reyes A01411229

#include <stdio.h> //Biblioteca. Nomás una

int main() {
    char string[200];
    int k; // Declarar variables

    printf("Por favor escribe un texto: "); // Lo que le va a aparecer al usuario
    fgets(string, sizeof(string), stdin); // Le pedi el string, me lo va a dar

    for (k = 0; string[k] != '\n'; k++); // Procedimiento
    printf("El tamaño es: %d", k); // Lo que va a salir

    return 0; // Fin
}