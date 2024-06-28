#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 /* FLAW: fputs() might fail, in which case the return value will be EOF (-1), but
 * we are checking to see if the return value is 0 */
 if (fputs("", VAR2) == 0)
 {
 FUN3("");
 }
 }
}
#endif
