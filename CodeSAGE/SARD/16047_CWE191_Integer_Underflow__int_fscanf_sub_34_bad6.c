#ifndef VAR1
void FUN1()
{
 int VAR2;
 CWE191_Integer_Underflow__int_fscanf_sub_34_unionType VAR3;
 VAR2 = 0;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 int VAR6 = VAR2 - 1;
 FUN2(VAR6);
 }
 }
}
#endif
