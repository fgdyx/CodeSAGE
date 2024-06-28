#ifndef VAR1
void FUN1()
{
 int64_t VAR2;
 CWE190_Integer_Overflow__int64_t_fscanf_multiply_34_unionType VAR3;
 VAR2 = 0LL;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 int64_t VAR2 = VAR3.VAR5;
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > LLONG_MAX, this will overflow */
 int64_t VAR6 = VAR2 * 2;
 FUN2(VAR6);
 }
 }
}
#endif
