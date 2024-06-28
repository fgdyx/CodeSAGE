#ifndef VAR1
void FUN1(short VAR2)
{
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 short VAR3 = VAR2 + 1;
 FUN2(VAR3);
 }
}
#endif
