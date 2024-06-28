#ifndef VAR1
void FUN1()
{
 if(VAR2)
 {
 /* FLAW: fputc() might fail, in which case the return value will be EOF (-1), but
 * we are checking to see if the return value is 0 */
 if (fputc((int)'', VAR3) == 0)
 {
 FUN2("");
 }
 }
}
#endif
