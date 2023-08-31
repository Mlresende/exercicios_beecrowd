#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>

void p1001(){
  int a, b, x;
  scanf("%d", &a);
  scanf("%d", &b);
  x=a+b;
  printf("X=%d\n", x); 
}
void p1002(){

  double area, raio;
  scanf("%lf", &area);
  raio = 3.14159*(area*area);
  printf("A= %.4lf", raio);
  
}
void p1003(){
  int a, b, x;
  scanf("%d", &a);
  scanf("%d", &b);
  x=a+b;
  printf("SOMA = %d\n", x); 
}
void p1004(){
int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  c=a*b;
  printf("PROD = %d\n", c);
}
void p1005(){
  double a, b, c;
  scanf("%lf", &a);
  scanf("%lf", &b);
  c = (((a*3.5)+(b*7.5))/11);
  printf("MEDIA = %.5lf\n", c);
}
void p1006(){
  double a, b, c, media;
  scanf("%lf%lf%lf", &a, &b, &c);
  media = ((a*2)+(b*3)+(c*5))/10;
  printf("MEDIA = %.1lf\n", media);
  
}
void p1007(){
  int a, b, c, d, media;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  media = (a*b-c*d);

  printf("Media = %d\n", media);
  
}
void p1008(){
  int funID;
  double salario, horas, total;
  scanf("%d", &funID);
  scanf("%lf%lf", &salario, &horas);
  total=salario*horas;
  printf("NUMBER = %d\n", funID);
  printf("SALARY = %.2lf\n", total);
  
  
}
void p1009(){
  char nome[50];
  double salario, ventotal, valtotal;
  //Ler
  scanf("%s", &nome);
  scanf("%lf%lf", &salario, &ventotal);
  //Executar
  valtotal=salario+ventotal*0.15;
  //Exibir
  printf("TOTAL = R$ %.2lf\n", valtotal);  
}
void p1010(){
  int codpeca, codpeca2, npeca, npeca2;
  double valpeca, valpeca2, total;

  scanf("%i%i%lf", &codpeca, &npeca, &valpeca);
  scanf("%i%i%lf", &codpeca2, &npeca2, &valpeca2);

  total=((npeca * valpeca)+(npeca2 * valpeca2));

  printf("VALOR A PAGAR = %.2lf\n", total);
  
  
}
void p1011(){
  double raio, esfera;
  scanf("%lf", &raio);

  esfera=(4/3.0 * 3.14159 * pow(raio,3));

  printf("VOLUME = %.3lf\n", esfera);
  
}
void p1012(){
    double A, B ,C, triangulo, circulo, trapezio,   quadrado, retangulo;
  scanf("%lf%lf%lf", &A, &B, &C);

  triangulo= (A * C)/2;
  circulo= (3.14159 * pow(C,2));
  trapezio= ((A + B) * C)/2;
  quadrado= (pow(B,2));
  retangulo= (A * B);
  
  printf("TRIANGULO: %.3lf\n", triangulo);
  printf("CIRCULO : %.3lf\n", circulo);
  printf("TRAPEZIO : %.3lf\n", trapezio);
  printf("QUADRADO: %.3lf\n", quadrado);
  printf("RETANGULO: %.3lf\n", retangulo);
}
void p1013(){
  
  int A, B, C, AB, ABC;
  scanf("%i%i%i", &A, &B, &C);

  AB = (A + B + abs(A - B))/2;
  ABC = (AB + C + abs(AB - C))/2;

  printf("%i eh maior\n", ABC);
}
void p1014(){
  int X;
  double Y, consumo;

  scanf("%i%lf", &X, &Y);
  
  consumo = X/Y;

  printf("%.3lf km/1\n", consumo);
}
void p1015(){
  double x1, x2, y1, y2, distancia;
  scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
  
  distancia=sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  printf("%.4lf", distancia);  
}
void p1016(){
  int km, tempo;
  scanf("%i", &km);

  tempo = km*2;
  
  printf("%i minutos\n", tempo);
}
void p1017(){
  int Tgasto, Vmedia;
  double litro;
  
  scanf("%i%i", &Tgasto, &Vmedia);

  litro= (Tgasto * Vmedia) / 12.0;

  printf("%.3lf", litro);
}
void p1018(){
  int valor, n100, n50, n20, n10, n5, n2, m1;
  scanf("%i", &valor);

  printf("%i\n", valor);
  
  n100 = valor / 100;
  valor = valor % 100;
  n50 = valor / 50;
  valor = valor % 50;
  n20 = valor / 20;
  valor = valor % 20;
  n10 = valor / 10;
  valor = valor % 10;
  n5 = valor / 5;
  valor = valor % 5;
  n2 = valor / 2;
  valor = valor % 2;
  m1 = valor / 1;

  printf("%i nota (s) de R$ 100,00\n", n100);
  printf("%i nota (s) de R$ 50,00\n", n50);
  printf("%i nota (s) de R$ 20,00\n", n20);
  printf("%i nota (s) de R$ 10,00\n", n10);
  printf("%i nota (s) de R$ 5,00\n", n5);
  printf("%i nota (s) de R$ 2,00\n", n2);
  printf("%i nota (s) de R$ 1,00\n", m1);
  
}
void p1019(){

  int N, segundos, horas, minutos, sobra;

  scanf("%i", &N);

  horas = N / 3600;
  sobra = N % 3600;
  minutos = sobra / 60;
  segundos = sobra % 60;

  printf("%i:%i:%i\n", horas, minutos, segundos);
}
void p1020(){

  int dias, a, m, d, resto;

  scanf("%i", &dias);

  a = dias / 365;
  resto = dias % 365;
  m = resto / 30;
  d = resto % 30;

  printf("%i ano(s)\n", a);
  printf("%i mes(es)\n", m);
  printf("%i dia(s)\n", d);
  
}
void p1021(){

  int n100, n50, n20, n10, n5, n2;
    int m1, m50, m25, m10, m05, m01;
    double n;

    scanf("%lf", &n);
    int notas = n;
    int moedas = (n - notas) * 100;

    if( (moedas * 1000) % 10 == 9) {
        moedas++;
    }


    n100 = notas/100;
    notas = notas%100;
    n50 = notas/50;
    notas = notas%50;
    n20 = notas/20;
    notas = notas%20;
    n10 = notas/10;
    notas = notas%10;
    n5 = notas/5;
    notas = notas%5;
    n2 = notas/2;
    notas = notas%2;

    m1 = notas/1;
    notas = notas%1;
    m50 = moedas/50;
    moedas = moedas%50;
    m25 = moedas/25;
    moedas = moedas%25;
    m10 = moedas/10;
    moedas = moedas%10;
    m05 = moedas/5;
    moedas = moedas%5;
    m01 = moedas/1;

  printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m05);
    printf("%d moeda(s) de R$ 0.01\n", m01);

  
    return 0;
  
}
void p1035(){
    
    int A, B, C, D;

    scanf("%d%d%d%d", &A, &B, &C, &D);

    if ((B>C&&D>A)&&(C+D>A+B)&&(C>=0&&D>=0)&&(A%2==0)){
      printf("Valores aceitos\n");
      }else{
        printf("Valores nao aceitos\n");
    }
}
void p1036(){
    double A, B, C, DELTA, R1, R2;
      scanf("%lf%lf%lf", &A, &B, &C);

    if(((B*B)-4*A*C)<0||A==0){
      printf("Impossivel calcular"); 
    }else{
      DELTA = sqrt((B*B)-4*A*C);
      R1 = ((-B+DELTA)/(2*A));
      R2 = ((-B-DELTA)/(2*A));
      
      printf("R1 = %.5lf\n", R1);
      printf("R2 = %.5lf\n", R2);
  }
}
void p1037(){
  double A;

  scanf("%lf", &A);
  if(A<0){
    printf("Fora de intervalo\n");
  }
  if(A > 0 && A<=25){
    printf("Intervalo [0,25]\n");
  }
  if(A > 25&& A <=50){
    printf("Intervalo (25,50]\n");
  }
  if(A > 50 && A<=75){
    printf("Intervalo (50,75]\n");
  }
  if(A > 75 && A<=100){
    printf("Intervalo (75,100]\n");
  }
  if(A>100){
    printf("Fora de intervalo\n");
  }
}
void p1038(){
  float x;

  scanf("%f", &x);
  
  if(x < 0 || x > 100){
    printf("Fora de intervalo");
  }
  else if (x <= 25){
    printf("Intervalo [0,25]");
  }
  else if (x <= 50){
    printf("Intervalo (25,50]");
  }
  else if (x <= 75){
    printf("Intervalo (50,75]");
  }
  else if (x <= 100){
  printf("Intervalo (75,100]");
  }  
}


void Auladia1410EX1(){
  int senha, senhacorreta=123, erro;
  
  do{
    printf("\nDigite a senha = ");
    scanf("%d", &senha);
    
    if(erro == 3 && senha != senhacorreta){
      erro=0;
      printf("\n Senha bloqueada. Aguarde 10 segundos.\n");
      sleep(10);
    }
    erro++;
    
  }while(senha != senhacorreta);
    printf("\n\nSenha está correta.\nBem vindo ao nosso sistema\n");
    printf("\n%d Tentativas", erro);
}
void Auladia1410EX2(){
    for(int tab = 2 ; tab <=9 ; tab++){
    printf("\nTabuada = %d\n", tab);
  for(int i = 2 ; i<=10 ; i++){
    printf("%02d x %02d = %02d\n", tab, i, tab*i);
    }
  }
}

int main() {
   
  Auladia1410EX1();
  
return 0;
}