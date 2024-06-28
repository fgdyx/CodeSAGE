#ifndef VAR1
void FUN1()
{
 if(VAR2)
 {
 {
 wchar_t VAR3[100] = VAR4"";
 wchar_t * VAR5 = VAR3;
 /* FLAW: Do not check the return value */
 fread((wchar_t *)VAR5, sizeof(wchar_t), (VAR6)(100-1), stdin);
 }
 }
}
#endif
