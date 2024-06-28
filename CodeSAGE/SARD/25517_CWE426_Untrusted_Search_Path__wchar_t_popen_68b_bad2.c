#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 VAR4 *VAR5;
 /* POTENTIAL FLAW: Executing the wpopen() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 VAR5 = FUN2(VAR2, VAR6"");
 if (VAR5 != NULL)
 {
 FUN3(VAR5);
 }
 }
}
#endif
