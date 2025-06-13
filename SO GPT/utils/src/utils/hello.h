#ifndef UTILS_HELLO_H_
#define UTILS_HELLO_H_

#include <stdlib.h>
#include <stdio.h>

/**
* @brief Imprime un saludo por consola
* @param quien Módulo desde donde se llama a la función
* @return No devuelve nada
*/

void crear_logger(FILE* file, char* process_name);
int iniciar_conexion(char* ip, char* puerto);
int iniciar_servidor(char* puerto);

#endif
