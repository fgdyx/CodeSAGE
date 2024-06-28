#ifndef VAR1
void FUN1(int * VAR2)
{
 int VAR3 = *VAR2;
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int VAR4 = VAR3 + 1;
 FUN2(VAR4);
 }
}
#endif
