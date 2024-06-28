#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 /* FLAW: the full path is not specified */
 wcscpy(VAR2, VAR5);
 break;
 default:
 FUN2("");
 break;
 }
 /* POTENTIAL FLAW: Executing the _wsystem() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 if (FUN3(VAR2) <= 0)
 {
 FUN2("");
 FUN4(1);
 }
}
#endif
