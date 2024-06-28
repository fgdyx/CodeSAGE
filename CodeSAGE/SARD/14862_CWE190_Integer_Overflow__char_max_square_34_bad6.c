#ifndef VAR1
void FUN1()
{
 char VAR2;
 CWE190_Integer_Overflow__char_max_square_34_unionType VAR3;
 VAR2 = '';
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR2 = VAR4;
 VAR3.VAR5 = VAR2;
 {
 char VAR2 = VAR3.VAR6;
 {
 /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
 char VAR7 = VAR2 * VAR2;
 FUN2(VAR7);
 }
 }
}
#endif
