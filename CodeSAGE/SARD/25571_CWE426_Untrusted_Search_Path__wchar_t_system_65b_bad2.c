#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Executing the _wsystem() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 if (FUN2(VAR2) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
}
#endif
