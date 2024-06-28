#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5==5)
 {
 /* FLAW: the full path is not specified */
 wcscpy(VAR2, VAR6);
 }
 {
 VAR7 *VAR8;
 /* POTENTIAL FLAW: Executing the wpopen() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 VAR8 = FUN2(VAR2, VAR4"");
 if (VAR8 != NULL)
 {
 FUN3(VAR8);
 }
 }
}
#endif
