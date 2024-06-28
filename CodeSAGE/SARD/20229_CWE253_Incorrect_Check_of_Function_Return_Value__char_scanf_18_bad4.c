#ifndef VAR1
void FUN1()
{
 goto VAR2;
VAR2:
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 /* FLAW: scanf() might fail, in which case the return value will be EOF (-1),
 * but we are checking to see if the return value is 0 */
 if (scanf("", VAR4) == 0)
 {
 FUN2("");
 }
 }
}
#endif
