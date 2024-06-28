#ifndef VAR1
void FUN1()
{
 int VAR2;
 CWE190_Integer_Overflow__int_fgets_multiply_34_unionType VAR3;
 VAR2 = 0;
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 VAR3.VAR6 = VAR2;
 {
 int VAR2 = VAR3.VAR7;
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > INT_MAX, this will overflow */
 int VAR8 = VAR2 * 2;
 FUN4(VAR8);
 }
 }
}
#endif
