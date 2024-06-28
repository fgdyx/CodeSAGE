#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR3 = NULL;
 VAR4* VAR5 = new VAR6;
 VAR5->FUN2(VAR3);
 delete VAR5;
}
#endif
