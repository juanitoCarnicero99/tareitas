int main() {
    char respuesta[3]; // Para almacenar la respuesta del usuario

    while (1) {
        printf("¿Deseas registrar un nuevo producto? (si/no): ");
        scanf("%s", respuesta);

        if (strcmp(respuesta, "no") == 0) {
            break; // Si la respuesta es "no", se rompe del bucle :)
        } else if (strcmp(respuesta, "si") != 0) {
            printf("Respuesta no válida. Por favor, ingresa 'si' o 'no'.\n");
        }

        
    char codigoProducto[11];
    char codigoAlmacen[6];

    // Solicitar el código de barras del producto
    printf("Ingrese el codigo de barras del producto (10 digitos): ");
    scanf("%s", codigoProducto);

    // Solicitar el código del almacén
    printf("Ingrese el codigo del almacen (debe tener el prefijo 20): ");
    scanf("%s", codigoAlmacen);

    // Verificar la longitud de los códigos
    if (strlen(codigoProducto) != 10 || strlen(codigoAlmacen) != 5 || strncmp(codigoAlmacen, "20", 2) != 0) {
        printf("Error: Codigos de barras o almacen incorrectos.\n");
        return 1; // Salir con código de error
    }

    // Verificar si el producto tiene descuento
    if (strcmp(codigoProducto, "8949899430") == 0 || 
        strcmp(codigoProducto, "7653512593") == 0 || 
        strcmp(codigoProducto, "9383867373") == 0 || 
        strcmp(codigoProducto, "88392904209") == 0) {
        printf("El producto tiene un 20%% de descuento.\n");
    } else {
        printf("El producto no tiene descuento.\n");
    }

    // Verificar si el producto puede participar en la rifa del vehículo
    char codigoProductoAlmacen[20];
    snprintf(codigoProductoAlmacen, sizeof(codigoProductoAlmacen), "%s%s", codigoProducto, codigoAlmacen);
    if (strcmp(codigoProductoAlmacen, "894985943020763") == 0 || 
        strcmp(codigoProductoAlmacen, "165331255320221") == 0 || 
        strcmp(codigoProductoAlmacen, "248386737320130") == 0 || 
        strcmp(codigoProductoAlmacen, "183923092220561") == 0) {
        printf("El producto puede participar en la rifa del vehiculo.\n");
    } else {
        printf("El producto no puede participar en la rifa del vehiculo.\n");

    }
        printf("El programa de registro de productos se repetira\n mientras se escriba 'si'.\n");
        printf("Si deseas salir escribe 'no'.\n");
    }

    printf("Se han registrado los productos ¡Adios!\n");
    return 0;
}