#ifndef VAR1
static void FUN1()
{
 goto VAR2;
VAR2:
 {
 wchar_t VAR3[100] = VAR4"";
 wchar_t * VAR5 = VAR3;
 FUN2("");
 if (FUN3(VAR5, 100, stdin) == NULL)
 {
 FUN2("");
 FUN4(1);
 }
 FUN5(VAR5);
 }
}
void FUN6()
{
 FUN1();
}
#endif
