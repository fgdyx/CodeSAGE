#ifndef VAR1
void FUN1(int VAR2)
{
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int VAR3 = VAR2 + 1;
 FUN2(VAR3);
 }
}
#endif
