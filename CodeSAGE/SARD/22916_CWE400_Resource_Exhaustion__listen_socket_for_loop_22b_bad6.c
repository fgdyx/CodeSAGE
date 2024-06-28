#ifndef VAR1
extern int VAR2;
void FUN1(int VAR3)
{
 if(VAR2)
 {
 {
 size_t VAR4 = 0;
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
 for (VAR4 = 0; VAR4 < (VAR5)VAR3; VAR4++)
 {
 FUN2("");
 }
 }
 }
}
#endif
