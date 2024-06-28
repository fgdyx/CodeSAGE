#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > INT_MAX, this will overflow */
 int VAR5 = VAR2 * 2;
 FUN4(VAR5);
 }
 break;
 default:
 FUN3("");
 break;
 }
}
#endif
