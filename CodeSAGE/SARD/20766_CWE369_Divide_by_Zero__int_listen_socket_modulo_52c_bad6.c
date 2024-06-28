#ifndef VAR1
void FUN1(int VAR2)
{
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN2(100 % VAR2);
}
#endif
