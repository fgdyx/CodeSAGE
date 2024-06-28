#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 VAR3* VAR4 = new VAR5;
 VAR4->FUN3(VAR2);
 delete VAR4;
}
#endif
