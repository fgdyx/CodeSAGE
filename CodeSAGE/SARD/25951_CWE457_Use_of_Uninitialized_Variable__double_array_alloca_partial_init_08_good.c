#ifndef VAR1
static void FUN1()
{
 double * VAR2;
 VAR2 = (double *)FUN2(10*sizeof(double));
 if(FUN3())
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<(10/2); VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
 }
 }
 }
 if(FUN4())
 {
 FUN5("");
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
 FUN6(VAR2[VAR3]);
 }
 }
 }
}
static void FUN7()
{
 double * VAR2;
 VAR2 = (double *)FUN2(10*sizeof(double));
 if(FUN3())
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<(10/2); VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
 }
 }
 }
 if(FUN3())
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
 FUN6(VAR2[VAR3]);
 }
 }
 }
}
static void FUN8()
{
 double * VAR2;
 VAR2 = (double *)FUN2(10*sizeof(double));
 if(FUN4())
 {
 FUN5("");
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
 if(FUN3())
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN6(VAR2[VAR3]);
 }
 }
 }
}
static void FUN9()
{
 double * VAR2;
 VAR2 = (double *)FUN2(10*sizeof(double));
 if(FUN3())
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
 }
 }
 }
 if(FUN3())
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN6(VAR2[VAR3]);
 }
 }
 }
}
void FUN10()
{
 FUN1();
 FUN7();
 FUN8();
 FUN9();
}
#endif
