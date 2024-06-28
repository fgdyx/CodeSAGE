#ifndef VAR1
void FUN1()
{
 char VAR2;
 CWE191_Integer_Underflow__char_fscanf_multiply_34_unionType VAR3;
 VAR2 = '';
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 char VAR2 = VAR3.VAR5;
 if(VAR2 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < CHAR_MIN, this will underflow */
 char VAR6 = VAR2 * 2;
 FUN2(VAR6);
 }
 }
}
#endif
