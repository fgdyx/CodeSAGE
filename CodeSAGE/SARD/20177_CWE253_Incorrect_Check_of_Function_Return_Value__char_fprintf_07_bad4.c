#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 /* FLAW: fprintf() might fail, in which case the return value will be negative, but
 * we are checking to see if the return value is 0 */
 if (fprintf(VAR3, "", "") == 0)
 {
 FUN2("");
 }
 }
}
#endif
