#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 goto VAR4;
VAR4:
 VAR3 = NULL;
 goto VAR5;
VAR5:
 if (VAR3 != NULL)
 {
 FUN2(VAR3->VAR6);
 }
 else
 {
 FUN3("");
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 goto VAR4;
VAR4:
 {
 twoIntsStruct VAR7;
 VAR7.VAR6 = 0;
 VAR7.VAR8 = 0;
 VAR3 = &VAR7;
 }
 goto VAR5;
VAR5:
 FUN2(VAR3->VAR6);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
