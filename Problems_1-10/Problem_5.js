/*2520 es el número más pequeño que se puede dividir por cada uno de los números del 1 a 10 sin ningún resto.
¿Cuál es el numero positivo más pequeño que es divisible por todos los números del 1 a 20? */

let num = parseInt(prompt("Elegiremos los numerós del 1 al: "));
let primo = 2, contar = 0, exp = 0, numDiv = 0, minNum = 1;

for (let i = 2; i <= num; i++) {                //recorremos desde el 2 hasta el numero elegido
    for (let j = 2; j <= i; j++ ) {             //recorremos desde el 2 hasta el indice del for anterior
        if (i % j == 0) contar++;               //contamos las veces que el residuo es CERO, 
    }
    if (contar == 1) {                          //Si el contador es 1, entonces es numero primo.
        primo = i;
        //alert(primo);

        do {                                    //Hacemos un bucle para las potencias del numero primo 
            exp++;                              //hasta que sea menor al numero principal.
            numDiv = primo**exp; 
        } while (numDiv <= num)
        exp = 1;
        minNum = minNum*numDiv/primo;           //vamos multiplicando los diferentes potencias que se encuentre de los primos
        //alert (minNum);
    }
    contar = 0;
    
}

alert (minNum);



