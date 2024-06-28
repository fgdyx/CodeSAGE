#ifndef VAR1
void FUN1()
{
 goto VAR2;
VAR2:
 /* FLAW: fputs() might fail, in which case the return value will be EOF (-1), but
 * we are checking to see if the return value is 0 */
 if (fputs("", VAR3) == 0)
 {
 FUN2("");
 }
}
#endif
