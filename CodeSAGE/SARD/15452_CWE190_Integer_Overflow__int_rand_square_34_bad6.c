#ifndef VAR1
void FUN1()
{
 int VAR2;
 CWE190_Integer_Overflow__int_rand_square_34_unionType VAR3;
 VAR2 = 0;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR6 = VAR2 * VAR2;
 FUN3(VAR6);
 }
 }
}
#endif
