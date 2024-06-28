#ifndef VAR1
static void FUN1()
{
 double * VAR2;
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
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 FUN3(*VAR2);
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
 if(FUN2())
 {
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 }
 else
 {
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 }
 if(FUN2())
 {
 FUN3(*VAR2);
 }
 else
 {
 FUN3(*VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
