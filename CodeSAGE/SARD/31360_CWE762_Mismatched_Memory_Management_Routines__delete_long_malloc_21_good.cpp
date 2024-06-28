#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(long * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 free(VAR5);
 }
}
static void FUN3()
{
 long * VAR5;
 VAR5 = NULL;
 VAR5 = (long *)malloc(100*sizeof(long));
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN4(long * VAR5)
{
 if(VAR3)
 {
 free(VAR5);
 }
}
static void FUN5()
{
 long * VAR5;
 VAR5 = NULL;
 VAR5 = (long *)malloc(100*sizeof(long));
 VAR3 = 1;
 FUN4(VAR5);
}
static void FUN6(long * VAR5)
{
 if(VAR4)
 {
 delete VAR5;
 }
}
static void FUN7()
{
 long * VAR5;
 VAR5 = NULL;
 VAR5 = new long;
 VAR4 = 1;
 FUN6(VAR5);
}
void FUN8()
{
 FUN3();
 FUN5();
 FUN7();
}
#endif
