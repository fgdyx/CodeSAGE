#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 goto VAR3;
VAR3:
 VAR2 = NULL;
 goto VAR4;
VAR4:
 if (VAR2 != NULL)
 {
 FUN2(VAR2[0]);
 }
 else
 {
 FUN3("");
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 goto VAR3;
VAR3:
 VAR2 = VAR5"";
 goto VAR4;
VAR4:
 FUN2(VAR2[0]);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
