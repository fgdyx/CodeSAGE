#ifndef VAR1
static void FUN1()
{
 double * VAR2;
 VAR2 = (double *)FUN2(10*sizeof(double));
 if(VAR3==5)
 {
 ;
 }
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR2[VAR4] = (double)VAR4;
 }
 }
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN4(VAR2[VAR4]);
 }
 }
 }
}
static void FUN5()
{
 double * VAR2;
 VAR2 = (double *)FUN2(10*sizeof(double));
 if(VAR3==5)
 {
 ;
 }
 if(VAR3==5)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR2[VAR4] = (double)VAR4;
 }
 }
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN4(VAR2[VAR4]);
 }
 }
 }
}
static void FUN6()
{
 double * VAR2;
 VAR2 = (double *)FUN2(10*sizeof(double));
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR2[VAR4] = (double)VAR4;
 }
 }
 }
 if(VAR3==5)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN4(VAR2[VAR4]);
 }
 }
 }
}
static void FUN7()
{
 double * VAR2;
 VAR2 = (double *)FUN2(10*sizeof(double));
 if(VAR3==5)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR2[VAR4] = (double)VAR4;
 }
 }
 }
 if(VAR3==5)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN4(VAR2[VAR4]);
 }
 }
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
