#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static void FUN1(long * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 if (VAR4 != NULL)
 {
 VAR4[0] = 5L;
 FUN3(VAR4[0]);
 free(VAR4);
 }
 }
}
static void FUN4()
{
 long * VAR4;
 VAR4 = NULL;
 VAR4 = (long *)calloc(1, sizeof(long));
 VAR2 = 0;
 FUN1(VAR4);
}
static void FUN5(long * VAR4)
{
 if(VAR3)
 {
 if (VAR4 != NULL)
 {
 VAR4[0] = 5L;
 FUN3(VAR4[0]);
 free(VAR4);
 }
 }
}
static void FUN6()
{
 long * VAR4;
 VAR4 = NULL;
 VAR4 = (long *)calloc(1, sizeof(long));
 VAR3 = 1;
 FUN5(VAR4);
}
void FUN7()
{
 FUN4();
 FUN6();
}
#endif
