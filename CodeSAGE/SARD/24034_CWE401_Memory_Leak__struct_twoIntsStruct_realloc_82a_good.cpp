#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (struct VAR2 *)FUN2(100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3((VAR6 *)&VAR3[0]);
 VAR7* VAR8 = new VAR9;
 VAR8->FUN4(VAR3);
 delete VAR8;
}
static void FUN5()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (struct VAR2 *)realloc(VAR3, 100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3((VAR6 *)&VAR3[0]);
 VAR7* VAR8 = new VAR10;
 VAR8->FUN4(VAR3);
 delete VAR8;
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
