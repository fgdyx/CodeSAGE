#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 {
 wchar_t VAR3[100] = VAR4"";
 wchar_t * VAR5 = VAR3;
 FUN2("");
 /* FLAW: Do not check the return value */
 FUN3(VAR5, 100, stdin);
 FUN4(VAR5);
 }
 }
}
#endif
