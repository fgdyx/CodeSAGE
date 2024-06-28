#ifndef VAR1
int FUN1(int VAR2)
{
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 return VAR2;
}
#endif
