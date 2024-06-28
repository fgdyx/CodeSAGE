#ifndef VAR1
void FUN1()
{
 switch(6)
 {
 case 6:
 /* FLAW: fputs() might fail, in which case the return value will be EOF (-1), but
 * we are checking to see if the return value is 0 */
 if (fputs("", VAR2) == 0)
 {
 FUN2("");
 }
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
