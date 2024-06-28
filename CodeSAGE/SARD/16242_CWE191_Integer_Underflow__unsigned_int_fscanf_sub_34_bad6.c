#ifndef VAR1
void FUN1()
{
 unsigned int VAR2;
 CWE191_Integer_Underflow__unsigned_int_fscanf_sub_34_unionType VAR3;
 VAR2 = 0;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 unsigned int VAR2 = VAR3.VAR5;
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 unsigned int VAR6 = VAR2 - 1;
 FUN2(VAR6);
 }
 }
}
#endif
