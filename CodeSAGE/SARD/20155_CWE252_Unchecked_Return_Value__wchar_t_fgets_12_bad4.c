#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 wchar_t VAR2[100] = VAR3"";
 wchar_t * VAR4 = VAR2;
 FUN3("");
 /* FLAW: Do not check the return value */
 FUN4(VAR4, 100, stdin);
 FUN5(VAR4);
 }
 }
 else
 {
 {
 wchar_t VAR2[100] = VAR3"";
 wchar_t * VAR4 = VAR2;
 FUN3("");
 if (FUN4(VAR4, 100, stdin) == NULL)
 {
 FUN3("");
 FUN6(1);
 }
 FUN5(VAR4);
 }
 }
}
#endif
