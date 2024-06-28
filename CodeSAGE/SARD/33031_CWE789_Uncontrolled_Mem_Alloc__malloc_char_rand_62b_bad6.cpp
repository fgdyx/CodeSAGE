#ifndef VAR1
void FUN1(VAR2 &VAR3)
{
 /* POTENTIAL FLAW: Set data to a random value */
 VAR3 = rand();
}
#endif
