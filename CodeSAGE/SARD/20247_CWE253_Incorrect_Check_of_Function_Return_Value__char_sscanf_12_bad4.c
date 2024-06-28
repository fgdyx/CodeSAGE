#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 /* FLAW: sscanf() might fail, in which case the return value will be EOF (-1), but
 * we are checking to see if the return value is 0 */
 if (sscanf(VAR4, "", VAR3) == 0)
 {
 FUN3("");
 }
 }
 }
 else
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 if (sscanf(VAR4, "", VAR3) == VAR5)
 {
 FUN3("");
 }
 }
 }
}
#endif
