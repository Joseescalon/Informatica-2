#include <iostream> 

int main () {
    int empleados = 5;
    //Se declara int porque es un número entero.
    float sueldos = 110.5;
    //Se declara float porque tiene decimales.
    float Pago = empleados * sueldos; 
    //Se declara float porque el valor dado tendra decimales.
    float tasa = 0.1;
    //Se declara float porque no es entero.

    float impuesto = tasa * Pago;
    //Se declara float porque el resultado no sera un entero.

    std::printf("%f", Pago);

    std::printf("%f", impuesto);

    empleados++;

    empleados++;

    empleados++;

    float Pago = empleados * sueldos;
    //Se declara float porque el resultado no sera un entero.
    float impuesto = tasa * Pago;
    //Se declara float porque el resultado no sera un entero.
    std::printf("%f", Pago);

    std::printf("%f", impuesto);

    //No se declaro ninguna variable con const ya que los valores de las mismas no son constantes.

}
