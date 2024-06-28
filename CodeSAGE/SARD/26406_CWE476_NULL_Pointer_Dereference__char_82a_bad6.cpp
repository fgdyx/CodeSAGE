#ifndef VAR1
void FUN1()
{
 char * VAR2;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR2 = NULL;
 VAR3* VAR4 = new VAR5;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
#endif
