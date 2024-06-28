#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 struct VAR3 * VAR4;
 VAR4 = NULL;
 VAR4 = (struct VAR3 *)FUN3(100*sizeof(struct VAR3));
 VAR4[0].VAR5 = 0;
 VAR4[0].VAR6 = 0;
 FUN4((VAR7 *)&VAR4[0]);
 FUN1(&VAR4);
}
void FUN5(void * VAR2);
static void FUN6()
{
 struct VAR3 * VAR4;
 VAR4 = NULL;
 VAR4 = (struct VAR3 *)malloc(100*sizeof(struct VAR3));
 VAR4[0].VAR5 = 0;
 VAR4[0].VAR6 = 0;
 FUN4((VAR7 *)&VAR4[0]);
 FUN5(&VAR4);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
