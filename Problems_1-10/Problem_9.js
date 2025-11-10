//Se tiene 3 números (a, b y c) que cumplan el teorema de pitagoras.
// Si a + b + c = 1000, dar como respuesta el producto abc.

let a = 199, b = 0, c = 0, sum = 0, product = 0;

do {
    a++
    b = 0;
    do {
        b++
        c = Math.sqrt(Math.pow(a,2) + Math.pow(b,2));
        //alert ("a = " + a + ", b = " + b + ", c = " + c)
        sum = a + b + c;
        if (sum ===1000) break;
    } while (sum <= 1000);
    product = a*b*c;    
} while (sum != 1000);


alert ("a = " + a + ", b = " + b + ",c = " + c);
alert ("El producto (abc) es igual a: " + product)