#ifndef VAR1
void FUN1()
{
 switch(6)
 {
 case 6:
 {
 wchar_t VAR2[100] = VAR3"";
 wchar_t * VAR4 = VAR2;
 /* FLAW: Do not check the return value */
 fread((wchar_t *)VAR4, sizeof(wchar_t), (VAR5)(100-1), stdin);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
