#ifndef VAR1
static void FUN1()
{
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
 if(1)
 {
 ;
 }
 if(0)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
 }
 }
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
 }
 }
 }
}
static void FUN4()
{
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
 if(1)
 {
 ;
 }
 if(1)
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
 }
 }
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
 }
 }
 }
}
static void FUN5()
{
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
 if(0)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
 }
 }
 }
 if(1)
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
 }
 }
 }
}
static void FUN6()
{
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
 if(1)
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
 }
 }
 }
 if(1)
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
 }
 }
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
