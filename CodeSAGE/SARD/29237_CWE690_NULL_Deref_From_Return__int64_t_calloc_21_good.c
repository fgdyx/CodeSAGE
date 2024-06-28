#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static void FUN1(VAR4 * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 if (VAR5 != NULL)
 {
 VAR5[0] = 5LL;
 FUN3(VAR5[0]);
 free(VAR5);
 }
 }
}
static void FUN4()
{
 VAR4 * VAR5;
 VAR5 = NULL;
 VAR5 = (VAR4 *)calloc(1, sizeof(VAR4));
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN5(VAR4 * VAR5)
{
 if(VAR3)
 {
 if (VAR5 != NULL)
 {
 VAR5[0] = 5LL;
 FUN3(VAR5[0]);
 free(VAR5);
 }
 }
}
static void FUN6()
{
 VAR4 * VAR5;
 VAR5 = NULL;
 VAR5 = (VAR4 *)calloc(1, sizeof(VAR4));
 VAR3 = 1;
 FUN5(VAR5);
}
void FUN7()
{
 FUN4();
 FUN6();
}
#endif
