#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
static void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 twoIntsStruct VAR6[50];
 twoIntsStruct VAR7[100];
 VAR5 = VAR7;
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 FUN1(VAR4);
}
void FUN4()
{
 FUN2();
}
#endif
