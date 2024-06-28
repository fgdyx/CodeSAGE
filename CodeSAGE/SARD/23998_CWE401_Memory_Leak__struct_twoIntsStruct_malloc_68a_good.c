#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (struct VAR2 *)FUN4(100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN5((VAR6 *)&VAR3[0]);
 VAR7 = VAR3;
 FUN1();
}
static void FUN6()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (struct VAR2 *)malloc(100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN5((VAR6 *)&VAR3[0]);
 VAR8 = VAR3;
 FUN2();
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
