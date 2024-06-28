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
 VAR6[0].VAR7 = 0;
 VAR6[0].VAR8 = 0;
 FUN3(&VAR6[0]);
 VAR2 = 0;
 FUN1(VAR6);
}
void FUN4(VAR5 * VAR6);
static void FUN5()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 VAR6 = (VAR5 *)calloc(100, sizeof(VAR5));
 VAR6[0].VAR7 = 0;
 VAR6[0].VAR8 = 0;
 FUN3(&VAR6[0]);
 VAR3 = 1;
 FUN4(VAR6);
}
void FUN6(VAR5 * VAR6);
static void FUN7()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 VAR6 = (VAR5 *)FUN8(100*sizeof(VAR5));
 VAR6[0].VAR7 = 0;
 VAR6[0].VAR8 = 0;
 FUN3(&VAR6[0]);
 VAR4 = 1;
 FUN6(VAR6);
}
void FUN9()
{
 FUN2();
 FUN5();
 FUN7();
}
#endif
