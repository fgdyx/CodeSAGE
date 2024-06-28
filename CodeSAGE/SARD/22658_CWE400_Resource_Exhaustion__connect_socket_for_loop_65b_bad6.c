#ifndef VAR1
void FUN1(int VAR2)
{
 {
 size_t VAR3 = 0;
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
 for (VAR3 = 0; VAR3 < (VAR4)VAR2; VAR3++)
 {
 FUN2("");
 }
 }
}
#endif
