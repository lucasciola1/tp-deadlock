#include <utils/hello.h>

void crear_logger(FILE* file, char* process_name){//Hay que agregar el tipo de log segun el archivo de configuracion
    t_log logger = log_create(file, process_name, TRUE, LOG_LEVEL_INFO);
    if(logger == NULL){
        printf("Error al crear logger")
        exit(1);
    }
}

int iniciar_conexion(char* ip, char* puerto){ //para usar en los demas modulos, pasarla a utils

int err;

    struct addrinfo hints, *server_info;

    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;

    err = getaddrinfo(ip, puerto, &hints, &server_info); //modificar por los valores correspondientes

    int fd_cliente = socket(server_info->ai_family, server_info->ai_socktype, server_info->ai_protocol);

    connect(fd_cliente, server_info->ai_addr, server_info->ai_addrlen);

    freeaddrinfo(server_info);

    return fd_cliente;

}

int iniciar_servidor(char* puerto){
    int fd_servidor;

    struct addrinfo hints, *servinfo;
    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;

    getaddrinfo(NULL, puerto, &hints, &servinfo);

    fd_servidor = socket(server_info->ai_family, server_info->ai_socktype, server_info->ai_protocol);
    bind(fd_servidor,servinfo->ai_addr, servinfo->ai_addrlen);
    listen(fd_servidor, SOMAXCONN);
    
    freeaddrinfo(servinfo);

    return fd_servidor;
}