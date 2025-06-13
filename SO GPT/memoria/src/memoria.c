#include <utils/hello.h>

void iniciar_memoria(){
    iniciar_loggers_memoria("Memoria.log", "Memoria"); //Hay que agregar el tipo de log segun el archivo de configuracion
    iniciar_config_memoria();
    iniciar_servidor_CPU();
    iniciar_servidor_Kernel();
}

void iniciar_loggers_memoria(FILE* file, char* process_name){
    t_log logger_kernel = crear_logger(file, process_name);
}

void iniciar_config_memoria(){
    //to do
}

void iniciar_servidor_CPU()
{
    int servidor_memoria_CPU = iniciar_servidor("puerto");
    //evaluacion de error
}

void iniciar_servidor_Kernel()
{
    int servidor_memoria_Kernel = iniciar_servidor("puerto");
    //evaluacion de error
}

int main(int argc, char* argv[]) {

    iniciar_memoria();


    saludar("memoria");
    return 0;
}
