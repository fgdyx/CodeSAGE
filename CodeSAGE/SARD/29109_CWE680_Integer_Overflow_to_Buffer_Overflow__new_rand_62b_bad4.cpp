#ifndef VAR1
void FUN1(int &VAR2)
{
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
}
#endif
