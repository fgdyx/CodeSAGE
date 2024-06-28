#ifndef VAR1
void FUN1()
{
 int VAR2;
 CWE400_Resource_Exhaustion__fscanf_for_loop_34_unionType VAR3;
 VAR2 = -1;
 /* POTENTIAL FLAW: Read count from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 size_t VAR6 = 0;
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
 for (VAR6 = 0; VAR6 < (VAR7)VAR2; VAR6++)
 {
 FUN2("");
 }
 }
 }
}
#endif
