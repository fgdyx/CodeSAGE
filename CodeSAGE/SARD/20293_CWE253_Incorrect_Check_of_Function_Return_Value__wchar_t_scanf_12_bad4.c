#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 wchar_t VAR2[100] = VAR3"";
 wchar_t * VAR4 = VAR2;
 /* FLAW: wscanf() might fail, in which case the return value will be EOF (-1),
 * but we are checking to see if the return value is 0 */
 if (wscanf(VAR3"", VAR4) == 0)
 {
 FUN3("");
 }
 }
 }
 else
 {
 {
 wchar_t VAR2[100] = VAR3"";
 wchar_t * VAR4 = VAR2;
 if (wscanf(VAR3"", VAR4) == VAR5)
 {
 FUN3("");
 }
 }
 }
}
#endif
