#ifndef VAR1
void FUN1()
{
 if(VAR2)
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 /* FLAW: snprintf() might fail, in which case the return value will be negative, but
 * we are checking to see if the return value is 0 */
 if (FUN2(VAR4,100-strlen(VAR5)-1, "", VAR5) == 0)
 {
 FUN3("");
 }
 }
 }
}
#endif
