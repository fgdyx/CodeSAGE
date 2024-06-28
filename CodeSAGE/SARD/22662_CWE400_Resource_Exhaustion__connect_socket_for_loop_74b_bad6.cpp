#ifndef VAR1
void FUN1(VAR2<int, int> VAR3)
{
 int VAR4 = VAR3[2];
 {
 size_t VAR5 = 0;
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
 for (VAR5 = 0; VAR5 < (VAR6)VAR4; VAR5++)
 {
 FUN2("");
 }
 }
}
#endif
