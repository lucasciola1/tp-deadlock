#include <utils/hello.h>

void iniciar_loggers_kernel(){
    t_log logger_kernel = log_create("kernel_logger.log", "Kernel", TRUE, LOG_LEVEL_INFO);
    if(logger_kernel == NULL){
        printf("Error al crear logger de Kernel")
        exit(1);
    }
}

void iniciar_configs_kernel(){
    t_config kernel_config = config_create("../kernel.config");
    if(kernel_config == NULL){
        log_error(kernel_config, "Error al crear el archivo de configuracion");
        exit(1);
    }

    /*
    .
    . ----> Pasar los valores del archivo de configuracion 
    .
    */
}


void iniciar_servidor_kernel()
{
    int servidor_kernel = iniciar_servidor("puerto");
    //evaluacion de error
}

void iniciar_kernel(){
    iniciar_configs_kernel();
    iniciar_conexion_memoria("ip", "puerto");
    iniciar_servidor_kernel();
}




int main(int argc, char* argv[]) {

    iniciar_kernel(); //iniciamos logs,configs (mas adelante vemos los argumentos)

    saludar("kernel");
    return 0;
}
