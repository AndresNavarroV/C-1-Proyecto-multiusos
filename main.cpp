#include <iostream> //proyecto Andres Navarro Velazquez
using namespace std;
int main(){
int x1, y1, p1, r1, q1;
int num;
int opc, num1, num2, res;
int i;
int o,var=1;
int nom=1,nom2,bandd=0;
int u;
int nombre, apellido;
int l;
cout<<"proyecto by Andres Navarro Velazquez"<< endl;
cout<<"Bienvenido a mi programa :)\n\n"<< endl;
cout<<"Escoge una opcion\n\n"<< endl;
cout<<"1: Estructuras de control\n"<< endl;
cout<<"2: Matrices\n"<< endl;
cout<<"3: Vectores\n"<< endl;
cout<<"4: Algoritmos de ordenamiento\n"<< endl;
cout<<"5: Salir\n\n"<< endl;
cin>>x1;
switch(x1){	
case 1: {	
system("cls");
cout<<"Estructuras de control\n\n";
cout<<"1--Si\n";
cout<<"2--Si sino\n";
cout<<"3--GradeBook utilizando estructura If\n";
cout<<"4--If con incremento ++\n";
cout<<"5--Cuenta del 1 al 100 con while\n";
cout<<"6--While modificado\n";
cout<<"7--Incremento\n";
cout<<"8--Ciclo for\n";
cout<<"9--For modificado\n";
cout<<"10--Escritura en un vector o array\n";
cout<<"11--Escritura y lectura de un vector\n";
cout<<"12--Vector con char\n";
cout<<"13--Suma de valores en array\n";
cout<<"14--Media artimetica\n";
cout<<"15--vector al derecho y al reves\n";
cout<<"16--Dias del año\n";
cout<<"17--Nombre compuesto con Vectores\n";
cout<<"18--Tablas de multiplicar\n\n";
cout<<"19--Salir\n\n";
cout<<"Elija una estructura de control\n";
cin>>y1;
switch(y1){
case 1:{
system("cls");
cout << "Escribe el numero 5" << endl;
cin >>num;
if(num==5)
cout << "bien hecho :)" << endl;
else
cout << "mal hecho :(" << endl;
}	
return 0;
case 2:{
system("cls");	
cout << "Menu\n1-suma\n2-resta\n3-multiplicacion\n4-divicion\n" << endl;
cin >>opc;
if(opc==1)
{
cout << "dame el primer numero de la suma" << endl;
cin >>num1;
cout << "dame el segundo numero de la suama" << endl;
cin >>num2;
res = num1 + num2;
cout << "El resultado de la suma es:"<< res <<endl;
}
if(opc==2)
{
cout << "dame el primer numero de la resta" << endl;
cin >>num1;
cout << "dame el segundo numero de la resta" << endl;
cin >>num2;
res = num1 - num2;
cout << "El resultado de la resta es:"<< res <<endl;
}
if(opc==3)
{
cout << "dame el primer numero de la multiplicacion" << endl;
cin >>num1;
cout << "dame el segundo numero de la multiplicacion" << endl;
cin >>num2;
res = num1 * num2;
cout << "El resultado de la multiplicacion es:"<< res <<endl;
}
if(opc==4)
{
cout << "dame el primer numero de la divicion" << endl;
cin >>num1;
cout << "dame el segundo numero de la divicion" << endl;
cin >>num2;
res = num1 / num2;
cout << "El resultado de la divicion es:"<< res <<endl;
}
}
return 0;
case 3:{
system("cls");
int num1, num2, num3, num4, num5, total;
cout << "ingrese 5 numeros del 0 al 100 para promediarlos" << endl;
cout << "ingrese el primer numero a promediar" << endl;
cin >>num1;
cout << "ingrese el segundo numero a promediar" << endl;
cin >>num2;
cout << "ingrese el tercero numero a promediar" << endl;
cin >>num3;
cout << "ingrese el cuarto numero a promediar" << endl;
cin >>num4;
cout << "ingrese el quinto numero a promediar" << endl;
cin >>num5;
total=(num1+num2+num3+num4+num5)/5;
if((total)==100)
{
cout << "El promedio es de:"<< total << " Exelente" << endl;
}
if((total)>=90&(total)<=99)
{
cout << "El promedio es de:"<< total << " Optimo" << endl;
}
if((total)>=80&(total)<=89)
{
cout << "El promedio es de:"<< total << " Optimo" << endl;
}
if((total)>=70&(total)<=79)
{
cout << "El promedio es de:"<< total << " Suficiente" << endl;
}
if((total)>=60&(total)<=69)
{
cout << "El promedio es de:"<< total << " Malo" << endl;
}
if((total)<=59)
{
cout << "El promedio es de:"<< total << " Reprobado" << endl;
}
}
return 0;
case 4:
{
system("cls");
i==0;
 while (i<=10)
{
cout<<i;
i++;
}
}
return 0;
case 5:{
system("cls");
int num=1,band=0;
while(band==0)
{
cout << " La cuenta va en: \n" << num << endl;
num=num+1;
if(num==101)
band=1;
}
}	
return 0;
case 6:
	{
system("cls");
int nom=1,nom2,bandd=0;
cout << "hasta que numero quieres que llegue la cuenta" << endl;
cin >> nom2;
while(bandd==0)
{
cout << "la cuenta va en: \n" << nom << endl;
nom=nom+1;
if(nom==nom2+1)
bandd=1;
}
}
return 0;
case 7:
{
system("cls");
while(var<=10)
{
cout << "hello \n" << endl;
var++;
}
}
return 0;
case 8:
{
system("cls");
int ou;
{
for(ou=0;ou<10;ou++)
 cout << "hello" << endl;
}
}
return 0;
case 9:{
system("cls");
int ii, nn;
{
cout << "cuantas veces quieres que se repita" << endl;
cin >> nn;
for(ii=0;ii<nn;ii++)
 cout << "hello" << endl;
}
}
return 0;
case 10:{
system("cls");
int l;
int vector [10];
for (l=0;l<=10;l++)
{
cout << "Dame un valor" << endl;
cin >> vector [l];
}
}
return 0;
case 11:{
system("cls");
int vector1[5];
for (u=0;u<5;u++)
{
cout << "Dame 5 valores" << endl;
cin >> vector1[u];
}
for(u=0;u<5;u++)
{
cout << "el vector es la linea\t" << u+1 << "\tes\t"<<vector1[u] << endl;
}
}
return 0;
case 12:
	{
system("cls");
char titulos[5];
char autores[5];
int k;
cout << "por favor ingrese la siguente informacion de los libros" << endl;
for(k=0;k<5;k++)
{
cout << "\n******* libro" << k + 1 << "***********:\n";
cout << "Titulo: ";
cin >> titulos[k];
cout << "Autor: ";
cin >> autores[k];
}
}
return 0;
case 13:
	{
system("cls");
int j, sumaa, vectorr1[5];
for (j=0;j<5;j++)
{
cout << "Dame 5 valores" << endl;
cin >> vectorr1[j];
}
for(j=0;j<5;j++)
{
cout << "el vector es la linea\t" << j+1 << "\tes\t"<<vectorr1[j] << endl;
}
{
sumaa=vectorr1[0]+vectorr1[1]+vectorr1[2]+vectorr1[3]+vectorr1[4];
cout << "\nla suma de sus valores es:" << sumaa << endl;
}
}
return 0;
case 14:
	{
system("cls");
int ii, resultadoo, soma=0, vectur1[4];
for (ii=0;ii<4;ii++)
{
cout << "Dame 4 valores" << endl;
cin >> vectur1[ii];
}
resultadoo=(vectur1[0]+vectur1[1]+vectur1[2]+vectur1[3])/4;
cout << "la media aritmetica de tus 4 numeros es:"<< resultadoo << endl;
cout << "sus numeros ingresados fueron los siguentes"<< "\nsu primer digito fue:" << vectur1[0] << "\nsu segundo digito fue:" << vectur1[1] << "\nsu tercer digito fue:" << vectur1[2] << "\nsu cuarto digito fue:" << vectur1[3] << endl;
}
return 0;
case 15:
	{
system("cls");
int j, vectur1[5];
for (j=0;j<5;j++)
{
cout << "Dame 5 valores" << endl;
cin >> vectur1[j];
}
for( j=4;j>=0;j--)
{
cout << "el vector es la linea\t" << j+1 << "\tes\t"<<vectur1[j] << endl;
}
}
return 0;
case 16:{
system("cls");
    int mes;
  cout<<"ingrese un numero:";
  cin>>mes;
    switch(mes)
	{
    case 1:cout<<"enero, corresponde al mes 1 "<< endl;
    cout<<"tiene 30 dias"<< endl;
    break;
    case 2:cout<<"febrero, corresponde al mes 2"<<endl;
    cout<<"tiene 28 dias"<< endl;
    break;
    case 3:cout<<"marzo, corresponde al mes 3"<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
    case 4:cout<<"abril, corresponde al mes 4"<<endl;
    cout<<"tiene 30 dias"<<endl;
    break;
    case 5:cout<<"mayo, corresponde al mes 5"<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
    case 6:cout<<"junio, corresponde al mes 6"<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
    case 7:cout<<"julio, corresponde al mes 7"<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
    case 8:cout<<"agosto, corresponde al mes 8"<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
    case 9:cout<<"setiembre, corresponde al mes 9"<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
    case 10:cout<<"octubre, corresponde al mes 10"<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
    case 11:cout<<"noviembre, corresponde al mes 11 "<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
    case 12:cout<<"diciembre, corresponde al mes 12 "<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
    default:cout<<"este mes no existe";
    }
}
return 0;
case 17:
	{
system("cls");
string nombre1[]={"Jose","Juan","Gabriel","Michael","Jenny","Rivera","Valentin","Chester"};
cout << "Elije tu nombre de artista muerto" << endl;
cout <<"1-Jose\n2-Juan\n3-Gabriel\n4-Michael\n5-Jenny\n6-Rivera\n7-Valentin\n8-Chester" << endl;
cout << "Elije el nombre" << endl;
cin >> nombre;
nombre=nombre-1;
cout << "Elije el apellido" << endl;
cin >> apellido;
apellido=apellido-1;
cout << "El nombre de tu artista muerto es:" << nombre1[nombre] << " " << nombre1[apellido] << endl;
}
return 0;
case 18:
{
system("cls");
int f=1, multiplicacion;
int vector[]={0,1,2,3,4,5,6,7,8,9,10,11};
cout << "escriba que tabla de multiplicar quiere conocer" << endl;
cin >> multiplicacion;
cout << "la tabla del "<< multiplicacion << " es:"<<endl;
for(f-1;f<11;f++){
vector[f] *= multiplicacion;
cout << multiplicacion << " x " << f << " = " << vector[f] <<endl;
}
}
return 0;
case 19:
cout << "ya esta fuera del programa" << endl;
return 0;
}
}
return 0;
case 2:
{
system("cls");
cout<<"Matrices\n\n";
cout<<"Elija una opcion\n\n";
cout<<"1--Declaracion de matrices\n";
cout<<"2--Tablas de multiplicar con matrices\n";
cout<<"3--Salir\n";
cin>>p1;
switch(p1)
{
case 1:
{
system("cls");
int matriz [3][3];
int c, v;
cout << "Escribe 9 numeros para acomodarlos en forma de matriz" << endl;
for(c=0;c<3;c++)
{
for(v=0;v<3;v++)
{
c+1, v+1;
cout << "dame un numero" << endl;
cin >> matriz [c][v];
}
}
printf(" ",matriz[c][v]);
for(c=0;c<3;c++){
printf("\n");
for(v=0;v<3;v++){
printf("%d ",matriz[c][v]);
}
}
}
return 0;
case 2:
{
system("cls");
int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int aux [3][3];
int cc, vv, e;
cout << "Que tabla de multiplicar quiere conocer" << endl;
cin >> e;
for(cc=0;cc<3;cc++)
{
for(vv=0;vv<3;vv++)
{
cc+1, vv+1;
aux[cc][vv]=e*mat[cc][vv];
cout << "|" << aux [cc][vv] << "|";
}
printf("\n");
}

break;
}
return 0;
case 3:
cout << "ya esta fuera del programa" << endl;
return 0;
}
}
return 0;
case 3:{
system("cls");
cout<<"Vectores\n\n";
cout<<"Elija una opcion\n\n";
cout<<"1--Contador de vocales\n";
cout<<"2--Contador de vocales modificado\n";
cout<<"3--Salir\n";
cin>>r1;
switch(r1)
{
case 1:{
system("cls");
char palabra [20];
int contado=0, rr;
cout << "Escribe una palabra (con vocales)" << endl;
cin >> palabra;
for(rr=0; rr<19; rr++)
{
if(palabra[rr]=='a'||palabra[rr]=='e'||palabra[rr]=='i'||palabra[rr]=='o'||palabra[rr]=='u')
contado= contado+1;
}
cout << "las vocales son: "<< contado << endl;
}
return 0;
case 2:{
system("cls");
char palaabra [20];
int contado1=0,contado2=0,contado3=0,contado4=0,contado5=0,contado6=0, aa;
cout << "Escribe una palabra(con vocales)" << endl;
cin >> palaabra;
for(aa=0; aa<19; aa++)
{
if(palaabra[aa]=='a'||palaabra[aa]=='e'||palaabra[aa]=='i'||palaabra[aa]=='o'||palaabra[aa]=='u')
{
contado1+=1;
}
if(palaabra [aa]=='a')
contado2+=1;
if(palaabra [aa]=='e')
contado3+=1;
if(palaabra [aa]=='i')
contado4+=1;
if(palaabra [aa]=='o')
contado5+=1;
if(palaabra [aa]=='u')
contado6+=1;
}
cout << "a: "<<contado2 << endl;
cout << "e: "<<contado3 << endl;
cout << "i: "<<contado4<< endl;
cout << "o: "<<contado5<< endl;
cout << "u: "<<contado6<< endl;
}
return 0;
case 3:
cout << "saliste del programa" << endl;
return 0;
}
}
return 0;
case 4:{
system("cls");
cout<<"algoritmos de ordenamiento\n\n";
cout<<"Elija una opcion\n\n";
cout<<"1--Algoritmo de burbuja\n";
cout<<"2--Ordenamiento\n";
cout<<"3--Bubbleshort menor a mayor\n";
cout<<"4--Bubbleshort mayor a menor\n";
cout<<"5--Salir\n";
cin>>q1;
switch(q1)
{
case 1:{
system("cls");
int ww, ee, rr, temp,nn, ar[50]; 
cout<<"Escribe los numeros para ordenar:"; 
cin>>nn; 
cout<<"Escribe "<<nn<<" numeros : \n"; 
for(ww=0; ww<nn; ww++) 
{
cin>>ar[ww];} 
for(ww=0;ww<(nn-1);ww++)
{
for(ee=0;ee<(nn-ww-1);ee++)
{
if(ar[ee]>ar[ee+1])
{
temp=ar[ee];
ar[ee]=ar[ee+1];
ar[ee+1]=temp;}
}
}
cout<<"Los numeros de menor a mayor son: \n"; 
for(ww=0; ww<nn; ww++)
{
cout<<ar[ww]<<" ";
}
return 0; 
}
case 2:{
system("cls");
int s=20, h, gg, temp, ar[50];

cout<<"Escribe "<<s<<" numeros para acomodarlos: \n";
for(h=0; h<s; h++)
{
cin>>ar[h];}
for(h=0;h<(s-1);h++)
{
for(gg=0;gg<(s-h-1);gg++)
{
if(ar[gg]>ar[gg+1])
{
temp=ar[gg];
ar[gg]=ar[gg+1];
ar[gg+1]=temp;}
}
}
cout<<"Los numeros de menor a mayor son: \n";
for(h=0; h<s; h++)
{
cout<<ar[h]<<" ";
}
return 0;
}
case 3:{
system("cls");
int yy, ss, auxx,vvec[100];
cout<<"Escribe "<<10<<" cantidades:"<<endl;
for(yy=0; yy<10; yy++)
{
cout << yy+1 <<"- ";
cin>>vvec[yy];
}
cout<<"los numeros de menor a mayor son:\n";
for(yy=0; yy<(10-1); yy++)
{
for(ss=0; ss<(10-yy-1); ss++)
{
if(vvec[ss]>vvec[ss+1])
{
auxx=vvec[ss];
vvec[ss]=vvec[ss+1];
vvec[ss+1]=auxx;
}
}
}
cout<<"\n";
for(yy=0; yy<10; yy++)
{
cout<<vvec[yy]<<" ";
}
return 0;
}	
case 4:
{
system("cls");
int y, s, aux,vec[100];
cout<<"Escribe "<<10<<" cantidades:"<<endl;
for(y=0; y<10; y++)
{
cout << y+1 <<"- ";
cin>>vec[y];
}
cout<<"los numeros de mayor a menor son:\n";
for(y=0; y<(10-1); y++)
{
for(s=0; s<(10-y-1); s++)
{
if(vec[s]>vec[s+1])
{
aux=vec[s];
vec[s]=vec[s+1];
vec[s+1]=aux;
}
}
}
cout<<"\n";
for(y=9; y>=0; y--)
{
cout<<vec[y]<<" ";
}
}
return 0;
case 5:	
cout << "saliste del programa" << endl;			
}
}
return 0;
case 5:
cout<<"saliste del programa"<<endl;
}
return 0;
}
