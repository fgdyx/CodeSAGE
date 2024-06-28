#ifndef VAR1
void FUN1(struct VAR2 * VAR3);
static void FUN2()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 struct _twoIntsStruct VAR4[100];
 VAR3 = VAR4;
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN3((VAR7 *)&VAR3[0]);
 FUN1(VAR3);
}
void FUN4(struct VAR2 * VAR3);
static void FUN5()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new struct VAR2[100];
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN3((VAR7 *)&VAR3[0]);
 FUN4(VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
