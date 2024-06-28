#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 /* FLAW: sscanf() might fail, in which case the return value will be EOF (-1), but
 * we are checking to see if the return value is 0 */
 if (sscanf(VAR5, "", VAR4) == 0)
 {
 FUN2("");
 }
 }
 }
}
#endif
