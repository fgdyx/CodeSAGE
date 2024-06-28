#ifndef VAR1
void FUN1()
{
 int64_t VAR2;
 VAR2 = 0LL;
 /* POTENTIAL FLAW: Use a random value */
 VAR2 = (VAR3)FUN2();
 VAR4* VAR5 = new VAR6;
 VAR5->FUN3(VAR2);
 delete VAR5;
}
#endif
