#ifndef VAR1
void FUN1()
{
 {
 wchar_t VAR2[100] = VAR3"";
 wchar_t * VAR4 = VAR2;
 /* FLAW: fread() might fail, in which case the return value will not be equal to 100-1,
 * but we are checking to see if the return value is equal to 0 */
 if (fread((wchar_t *)VAR4, sizeof(wchar_t), (VAR5)(100-1), stdin) == 0)
 {
 FUN2("");
 }
 }
}
#endif
