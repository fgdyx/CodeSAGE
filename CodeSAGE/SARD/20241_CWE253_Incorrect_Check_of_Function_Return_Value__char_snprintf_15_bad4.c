#ifndef VAR1
void FUN1()
{
 switch(6)
 {
 case 6:
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 /* FLAW: snprintf() might fail, in which case the return value will be negative, but
 * we are checking to see if the return value is 0 */
 if (FUN2(VAR3,100-strlen(VAR4)-1, "", VAR4) == 0)
 {
 FUN3("");
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
}
#endif
