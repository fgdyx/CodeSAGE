#ifndef VAR1
void FUN1()
{
 short VAR2;
 CWE190_Integer_Overflow__short_fscanf_multiply_34_unionType VAR3;
 VAR2 = 0;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 short VAR2 = VAR3.VAR5;
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > SHRT_MAX, this will overflow */
 short VAR6 = VAR2 * 2;
 FUN2(VAR6);
 }
 }
}
#endif
