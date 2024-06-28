#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 VAR5 *VAR6;
 /* POTENTIAL FLAW: Executing the wpopen() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 VAR6 = FUN3(VAR2, VAR4"");
 if (VAR6 != NULL)
 {
 FUN4(VAR6);
 }
 }
}
#endif
