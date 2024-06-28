#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 VAR3 = (VAR2 *)FUN3(100*sizeof(VAR2));
 VAR3[0].VAR6 = 0;
 VAR3[0].VAR7 = 0;
 FUN4(&VAR3[0]);
 FUN5(VAR3);
}
void FUN6(VAR2 * VAR3);
static void FUN7()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR8;
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 VAR3[0].VAR6 = 0;
 VAR3[0].VAR7 = 0;
 FUN4(&VAR3[0]);
 FUN5(VAR3);
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
