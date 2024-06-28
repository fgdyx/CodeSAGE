#ifndef VAR1
static void FUN1()
{
 double * VAR2;
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
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 FUN3(*VAR2);
 }
}
static void FUN4()
{
 double * VAR2;
 if(5==5)
 {
 ;
 }
 if(5==5)
 {
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 FUN3(*VAR2);
 }
}
static void FUN5()
{
 double * VAR2;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 }
 if(5==5)
 {
 FUN3(*VAR2);
 }
}
static void FUN6()
{
 double * VAR2;
 if(5==5)
 {
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 }
 if(5==5)
 {
 FUN3(*VAR2);
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
