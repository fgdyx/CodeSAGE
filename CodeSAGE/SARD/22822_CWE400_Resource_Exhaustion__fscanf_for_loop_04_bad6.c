#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3)
 {
 /* POTENTIAL FLAW: Read count from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 }
 if(VAR3)
 {
 {
 size_t VAR4 = 0;
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
 for (VAR4 = 0; VAR4 < (VAR5)VAR2; VAR4++)
 {
 FUN2("");
 }
 }
 }
}
#endif
