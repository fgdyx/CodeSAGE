#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 FUN3("");
 /* FLAW: Incorrectly check the return value: if this function failed it will return NULL,
 * but we are checking to see if the return value is less than 0. */
 if (fgets(VAR3, 100, stdin) < 0)
 {
 FUN3("");
 FUN4(1);
 }
 FUN3(VAR3);
 }
 }
}
#endif
