#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int VAR3[10];
 VAR2 = VAR3;
 if(FUN2())
 {
 ;
 }
 else
 {
 ;
 }
 if(FUN2())
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
 }
}
static void FUN4()
{
 int * VAR2;
 int VAR3[10];
 VAR2 = VAR3;
 if(FUN2())
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR2[VAR4] = VAR4;
 }
 }
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
 if(FUN2())
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR2[VAR4]);
 }
 }
 }
 else
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR2[VAR4]);
 }
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
