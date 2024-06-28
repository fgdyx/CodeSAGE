#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 while(1)
 {
 /* FLAW: the full path is not specified */
 wcscpy(VAR2, VAR5);
 break;
 }
 {
 VAR6 *VAR7;
 /* POTENTIAL FLAW: Executing the wpopen() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 VAR7 = FUN2(VAR2, VAR4"");
 if (VAR7 != NULL)
 {
 FUN3(VAR7);
 }
 }
}
#endif
