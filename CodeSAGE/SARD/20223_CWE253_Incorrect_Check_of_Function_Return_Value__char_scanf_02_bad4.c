#ifndef VAR1
void FUN1()
{
 if(1)
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 /* FLAW: scanf() might fail, in which case the return value will be EOF (-1),
 * but we are checking to see if the return value is 0 */
 if (scanf("", VAR3) == 0)
 {
 FUN2("");
 }
 }
 }
}
#endif
