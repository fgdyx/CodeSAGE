#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static VAR4 * FUN1(VAR4 * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 VAR5 = (VAR4 *)malloc(sizeof(*VAR5));
 VAR5->VAR6 = 1;
 VAR5->VAR7 = 2;
 }
 return VAR5;
}
static void FUN3()
{
 VAR4 * VAR5;
 VAR5 = NULL;
 VAR2 = 0;
 VAR5 = FUN1(VAR5);
 FUN4(VAR5);
 free(VAR5);
}
static VAR4 * FUN5(VAR4 * VAR5)
{
 if(VAR3)
 {
 VAR5 = (VAR4 *)malloc(sizeof(*VAR5));
 VAR5->VAR6 = 1;
 VAR5->VAR7 = 2;
 }
 return VAR5;
}
static void FUN6()
{
 VAR4 * VAR5;
 VAR5 = NULL;
 VAR3 = 1;
 VAR5 = FUN5(VAR5);
 FUN4(VAR5);
 free(VAR5);
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
