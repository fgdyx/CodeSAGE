#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Use an invalid index */
 VAR2 = 10;
 VAR3* VAR4 = new VAR5;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
#endif
