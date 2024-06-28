#ifndef VAR1
void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = rand();
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
#endif
