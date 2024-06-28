#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(long * VAR5);
static void FUN2()
{
 long * VAR5;
 VAR5 = NULL;
 VAR5 = (long *)calloc(100, sizeof(long));
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN3(long * VAR5);
static void FUN4()
{
 long * VAR5;
 VAR5 = NULL;
 VAR5 = (long *)calloc(100, sizeof(long));
 VAR3 = 1;
 FUN3(VAR5);
}
void FUN5(long * VAR5);
static void FUN6()
{
 long * VAR5;
 VAR5 = NULL;
 VAR5 = new long;
 VAR4 = 1;
 FUN5(VAR5);
}
void FUN7()
{
 FUN2();
 FUN4();
 FUN6();
}
#endif
