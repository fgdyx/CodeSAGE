#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 wchar_t VAR2[100] = VAR3"";
 wchar_t * VAR4 = VAR2;
 FUN3("");
 /* FLAW: Incorrectly check the return value: if this function failed it will return NULL,
 * but we are checking to see if the return value is less than 0. */
 if (FUN4(VAR4, 100, stdin) < 0)
 {
 FUN3("");
 FUN5(1);
 }
 FUN6(VAR4);
 }
 }
}
#endif
