#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 {
 twoIntsStruct VAR6;
 VAR6.VAR7 = 0;
 VAR6.VAR8 = 0;
 VAR3 = &VAR6;
 }
 FUN3(VAR3);
}
void FUN4(VAR2 * VAR3);
static void FUN5()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR9;
 VAR3 = NULL;
 FUN3(VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
