#ifndef VAR1
void FUN1(struct VAR2 * VAR3);
static void FUN2()
{
 struct VAR2 * VAR3;
 void (*VAR4) (struct VAR2 *) = VAR5;
 VAR3 = NULL;
 VAR3 = (struct VAR2 *)FUN3(100*sizeof(struct VAR2));
 VAR3[0].VAR6 = 0;
 VAR3[0].VAR7 = 0;
 FUN4((VAR8 *)&VAR3[0]);
 FUN5(VAR3);
}
void FUN6(struct VAR2 * VAR3);
static void FUN7()
{
 struct VAR2 * VAR3;
 void (*VAR4) (struct VAR2 *) = VAR9;
 VAR3 = NULL;
 VAR3 = (struct VAR2 *)malloc(100*sizeof(struct VAR2));
 VAR3[0].VAR6 = 0;
 VAR3[0].VAR7 = 0;
 FUN4((VAR8 *)&VAR3[0]);
 FUN5(VAR3);
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
