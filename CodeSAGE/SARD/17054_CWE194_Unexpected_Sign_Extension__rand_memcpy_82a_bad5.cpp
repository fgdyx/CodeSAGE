#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
 /* FLAW: Use a random value that could be less than 0 */
 VAR2 = (short)FUN2();
 VAR3* VAR4 = new VAR5;
 VAR4->FUN3(VAR2);
 delete VAR4;
}
#endif
