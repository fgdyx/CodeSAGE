#ifndef VAR1
void FUN1()
{
 char VAR2;
 VAR2 = '';
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR2 = VAR3;
 VAR4* VAR5 = new VAR6;
 VAR5->FUN2(VAR2);
 delete VAR5;
}
#endif
