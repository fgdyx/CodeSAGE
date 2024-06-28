#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(struct VAR5 * VAR6);
static void FUN2()
{
 struct VAR5 * VAR6;
 VAR6 = NULL;
 VAR6 = new struct VAR5[100];
 VAR6[0].VAR7 = 0;
 VAR6[0].VAR8 = 0;
 FUN3((VAR9 *)&VAR6[0]);
 VAR2 = 0;
 FUN1(VAR6);
}
void FUN4(struct VAR5 * VAR6);
static void FUN5()
{
 struct VAR5 * VAR6;
 VAR6 = NULL;
 VAR6 = new struct VAR5[100];
 VAR6[0].VAR7 = 0;
 VAR6[0].VAR8 = 0;
 FUN3((VAR9 *)&VAR6[0]);
 VAR3 = 1;
 FUN4(VAR6);
}
void FUN6(struct VAR5 * VAR6);
static void FUN7()
{
 struct VAR5 * VAR6;
 VAR6 = NULL;
 struct _twoIntsStruct VAR10[100];
 VAR6 = VAR10;
 VAR6[0].VAR7 = 0;
 VAR6[0].VAR8 = 0;
 FUN3((VAR9 *)&VAR6[0]);
 VAR4 = 1;
 FUN6(VAR6);
}
void FUN8()
{
 FUN2();
 FUN5();
 FUN7();
}
#endif
