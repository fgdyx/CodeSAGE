#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 struct _twoIntsStruct VAR4;
 VAR3 = &VAR4;
 VAR3->VAR5 = 0;
 VAR3->VAR6 = 0;
 FUN2((VAR7 *)VAR3);
 VAR8* VAR9 = new VAR10;
 VAR9->FUN3(VAR3);
 delete VAR9;
}
static void FUN4()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new struct VAR2;
 VAR3->VAR5 = 0;
 VAR3->VAR6 = 0;
 FUN2((VAR7 *)VAR3);
 VAR8* VAR9 = new VAR11;
 VAR9->FUN3(VAR3);
 delete VAR9;
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
