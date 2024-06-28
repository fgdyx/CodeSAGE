#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(VAR5 * VAR6);
static void FUN2()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 VAR6 = (VAR5 *)calloc(100, sizeof(VAR5));
 VAR2 = 0;
 FUN1(VAR6);
}
void FUN3(VAR5 * VAR6);
static void FUN4()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 VAR6 = (VAR5 *)calloc(100, sizeof(VAR5));
 VAR3 = 1;
 FUN3(VAR6);
}
void FUN5(VAR5 * VAR6);
static void FUN6()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 VAR6 = new VAR5[100];
 VAR4 = 1;
 FUN5(VAR6);
}
void FUN7()
{
 FUN2();
 FUN4();
 FUN6();
}
#endif
