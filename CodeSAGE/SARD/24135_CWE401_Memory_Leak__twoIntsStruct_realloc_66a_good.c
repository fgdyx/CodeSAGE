#ifndef VAR1
void FUN1(VAR2 * VAR3[]);
static void FUN2()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR4 = NULL;
 VAR4 = (VAR2 *)FUN3(100*sizeof(VAR2));
 VAR4[0].VAR5 = 0;
 VAR4[0].VAR6 = 0;
 FUN4(&VAR4[0]);
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN5(VAR2 * VAR3[]);
static void FUN6()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR4 = NULL;
 VAR4 = (VAR2 *)realloc(VAR4, 100*sizeof(VAR2));
 VAR4[0].VAR5 = 0;
 VAR4[0].VAR6 = 0;
 FUN4(&VAR4[0]);
 VAR3[2] = VAR4;
 FUN5(VAR3);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
