#ifndef VAR1
void FUN1()
{
 switch(6)
 {
 case 6:
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 /* FLAW: sscanf() might fail, in which case the return value will be EOF (-1), but
 * we are checking to see if the return value is 0 */
 if (sscanf(VAR4, "", VAR3) == 0)
 {
 FUN2("");
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
