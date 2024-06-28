#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5)
 {
 /* FLAW: the full path is not specified */
 wcscpy(VAR2, VAR6);
 }
 /* POTENTIAL FLAW: Executing the _wsystem() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 if (FUN2(VAR2) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
}
#endif
