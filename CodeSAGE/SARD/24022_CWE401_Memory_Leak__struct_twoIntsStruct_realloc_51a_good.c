#ifndef VAR1
void FUN1(struct VAR2 * VAR3);
static void FUN2()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (struct VAR2 *)FUN3(100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN4((VAR6 *)&VAR3[0]);
 FUN1(VAR3);
}
void FUN5(struct VAR2 * VAR3);
static void FUN6()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (struct VAR2 *)realloc(VAR3, 100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN4((VAR6 *)&VAR3[0]);
 FUN5(VAR3);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
