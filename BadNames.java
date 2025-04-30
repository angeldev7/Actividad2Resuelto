import java.util.Scanner;

public class BadNames {

    // Arreglo donde guardaremos hasta 10 números
    private int[] n = new int[10];   // ¿qué es “n”?
    private int i = 0;               // índice actual… ¿“i” de qué?

    // Método “a”: agrega un número al arreglo
    public void a(int v) {
        n[i++] = v;                  // “v” tampoco dice mucho
    }

    // Método “b”: calcula la suma
    public int b() {
        int s = 0;                   // “s” -> ¿suma? ¿salario?
        for (int j = 0; j < i; j++) {
            s += n[j];
        }
        return s;
    }

    // Método “c”: promedio de los números guardados
    public double c() {
        return i == 0 ? 0 : (double) b() / i;
    }

    // Pequeña interfaz de consola para ejecutar y probar
    public static void main(String[] args) {
        BadNames x = new BadNames();               // ¿por qué “x”?
        Scanner sc = new Scanner(System.in);

        System.out.print("¿Cuántos números ingresará? ");
        int t = sc.nextInt();                      // “t” -> ¿total?

        for (int k = 0; k < t; k++) {              // “k” -> contador genérico
            System.out.print("Número: ");
            x.a(sc.nextInt());
        }

        System.out.println("Suma = " + x.b());
        System.out.println("Promedio = " + x.c());
        sc.close();
    }
}
