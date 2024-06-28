#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = new int[10];
 if(5==5)
 {
 ;
 }
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
 }
 }
 delete [] VAR2;
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = new int[10];
 if(5==5)
 {
 ;
 }
 if(5==5)
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
 }
 }
 delete [] VAR2;
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = new int[10];
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
 }
 if(5==5)
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
 }
 }
 delete [] VAR2;
 }
}
static void FUN6()
{
 int * VAR2;
 VAR2 = new int[10];
 if(5==5)
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
 }
 if(5==5)
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
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
