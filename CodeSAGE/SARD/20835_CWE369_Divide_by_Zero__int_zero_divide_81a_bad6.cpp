#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Set data to zero */
 VAR2 = 0;
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
#endif
