#ifndef VAR1
void FUN1()
{
 char VAR2;
 VAR2 = '';
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR2 = VAR3;
 const VAR4& VAR5 = FUN2();
 VAR5.FUN3(VAR2);
}
#endif
