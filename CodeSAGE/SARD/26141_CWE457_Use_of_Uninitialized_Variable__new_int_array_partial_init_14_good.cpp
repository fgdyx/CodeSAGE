#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = new int[10];
 if(VAR3==5)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR2[VAR4] = VAR4;
 }
 }
 }
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR2[VAR4] = VAR4;
 }
 }
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR2[VAR4]);
 }
 }
 delete [] VAR2;
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = new int[10];
 if(VAR3==5)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR2[VAR4] = VAR4;
 }
 }
 }
 if(VAR3==5)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR2[VAR4] = VAR4;
 }
 }
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR2[VAR4]);
 }
 }
 delete [] VAR2;
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = new int[10];
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR2[VAR4] = VAR4;
 }
 }
 }
 if(VAR3==5)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR2[VAR4]);
 }
 }
 delete [] VAR2;
 }
}
static void FUN6()
{
 int * VAR2;
 VAR2 = new int[10];
 if(VAR3==5)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR2[VAR4] = VAR4;
 }
 }
 }
 if(VAR3==5)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR2[VAR4]);
 }
 }
 delete [] VAR2;
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
