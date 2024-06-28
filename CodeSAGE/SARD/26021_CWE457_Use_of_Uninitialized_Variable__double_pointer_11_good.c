#ifndef VAR1
static void FUN1()
{
 double * VAR2;
 if(FUN2())
 {
 ;
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 FUN5(*VAR2);
 }
}
static void FUN6()
{
 double * VAR2;
 if(FUN2())
 {
 ;
 }
 if(FUN2())
 {
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 FUN5(*VAR2);
 }
}
static void FUN7()
{
 double * VAR2;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 }
 if(FUN2())
 {
 FUN5(*VAR2);
 }
}
static void FUN8()
{
 double * VAR2;
 if(FUN2())
 {
 VAR2 = (double *)malloc(sizeof(double));
 *VAR2 = 5.0;
 }
 if(FUN2())
 {
 FUN5(*VAR2);
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
