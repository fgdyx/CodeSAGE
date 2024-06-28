#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 FUN2("");
 /* FLAW: Incorrectly check the return value: if this function failed it will return NULL,
 * but we are checking to see if the return value is less than 0. */
 if (fgets(VAR4, 100, stdin) < 0)
 {
 FUN2("");
 FUN3(1);
 }
 FUN2(VAR4);
 }
 }
}
#endif
