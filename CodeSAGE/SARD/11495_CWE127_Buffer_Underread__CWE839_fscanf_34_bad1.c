#ifndef VAR1
void FUN1()
{
 int VAR2;
 CWE127_Buffer_Underread__CWE839_fscanf_34_unionType VAR3;
 VAR2 = -1;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This check does not check to see if the array index is negative */
 if (VAR2 < 10)
 {
 FUN2(VAR6[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
#endif
