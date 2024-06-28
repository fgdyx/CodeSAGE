#ifndef VAR1
void FUN1()
{
 unsigned int VAR2;
 CWE190_Integer_Overflow__unsigned_int_fscanf_add_34_unionType VAR3;
 VAR2 = 0;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 unsigned int VAR2 = VAR3.VAR5;
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 unsigned int VAR6 = VAR2 + 1;
 FUN2(VAR6);
 }
 }
}
#endif
