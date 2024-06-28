#ifndef VAR1
static void FUN1()
{
 char VAR2 = VAR3;
 {
 /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
 char VAR4 = VAR2 * VAR2;
 FUN2(VAR4);
 }
}
void FUN3()
{
 char VAR2;
 VAR2 = '';
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR2 = VAR5;
 VAR3 = VAR2;
 FUN1();
}
#endif
