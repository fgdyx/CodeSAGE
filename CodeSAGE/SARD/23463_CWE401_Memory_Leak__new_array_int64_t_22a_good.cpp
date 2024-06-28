#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(VAR5 * VAR6);
static void FUN2()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 VAR6 = new VAR5[100];
 VAR6[0] = 5LL;
 FUN3(VAR6[0]);
 VAR2 = 0;
 FUN1(VAR6);
}
void FUN4(VAR5 * VAR6);
static void FUN5()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 VAR6 = new VAR5[100];
 VAR6[0] = 5LL;
 FUN3(VAR6[0]);
 VAR3 = 1;
 FUN4(VAR6);
}
void FUN6(VAR5 * VAR6);
static void FUN7()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 int64_t VAR7[100];
 VAR6 = VAR7;
 VAR6[0] = 5LL;
 FUN3(VAR6[0]);
 VAR4 = 1;
 FUN6(VAR6);
}
void FUN8()
{
 FUN2();
 FUN5();
 FUN7();
}
#endif
