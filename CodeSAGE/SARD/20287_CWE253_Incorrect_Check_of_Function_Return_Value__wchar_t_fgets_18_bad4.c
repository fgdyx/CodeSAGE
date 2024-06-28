#ifndef VAR1
void FUN1()
{
 goto VAR2;
VAR2:
 {
 wchar_t VAR3[100] = VAR4"";
 wchar_t * VAR5 = VAR3;
 FUN2("");
 /* FLAW: Incorrectly check the return value: if this function failed it will return NULL,
 * but we are checking to see if the return value is less than 0. */
 if (FUN3(VAR5, 100, stdin) < 0)
 {
 FUN2("");
 FUN4(1);
 }
 FUN5(VAR5);
 }
}
#endif
